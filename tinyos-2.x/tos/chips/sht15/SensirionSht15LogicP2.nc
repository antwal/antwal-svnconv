
/**
 * SensirionSht15LogicP contains the actual driver logic needed to
 * read from the Sensirion SHT15 temperature/humidity sensor. It
 * depends on 2 underlying GeneralIO interfaces, one for the data pin
 * and one for the clock pin, and one underlying GpioInterrupt.  It
 * provides the HAL-level SensirionSht15 interface. It's generic, so
 * you can instantiate it multiple times if you have more than one
 * Sensirion SHT15 attached to a node. 
 * 
 * <p>
 * This code assumes that the MCU clock is less than 10 MHz.  If you
 * ever run this on a faster MCU, you'll need to insert a lot of
 * waits to keep the Sensirion happy.
 *
 * @author P Sowjanya <sowjanyap@cdac.in>
 * @author Gilman Tolle <gtolle@archrock.com>
 * @version $Revision: 1.0 $
 */

#include "Timer.h"
#include "SensirionSht15.h"

generic module SensirionSht15LogicP() {
  provides interface SensirionSht15[ uint8_t client ];

  uses interface GeneralIO as DATA;
  uses interface GeneralIO as CLOCK;
  uses interface GpioInterrupt as InterruptDATA;

  uses interface Timer<TMilli>;

  uses interface Leds;
}
implementation {

  //states
  enum { IDLE, TEMP_MEASUREMENT, HUM_MEASUREMENT };

  //flags
  #define TEMP_PENDING 0x01
  #define HUM_PENDING 0x02

  void delay() {
    asm volatile  ("nop" ::);
    asm volatile  ("nop" ::);
    asm volatile  ("nop" ::);
  }

  //#define TEMP_COMMAND 0x1e
  #define TEMP_COMMAND 0x03
  #define HUM_COMMAND  0x05
  #define SOFT_RESET   0x1e 
 
  char state;  //all states are changed inside tasks.
  char pending_states;
  uint8_t currentClient;

  static inline void clk(){
    delay();
    call CLOCK.clr();
    delay();
    call CLOCK.set();
  }

  static inline void  ack()
  {
    call DATA.makeOutput();
    call DATA.clr();
    delay();
    call CLOCK.set();
    delay();
    call CLOCK.clr();
    call DATA.makeInput();
  }

  static inline void initseq()
  { 
    call DATA.makeOutput();
    call DATA.set();
    call CLOCK.clr();   
    delay();         
    call CLOCK.set();
    delay();
    call DATA.clr();
    delay();
    call CLOCK.clr();
    delay();
    call CLOCK.set();
    delay(); 
    call DATA.set();
    delay(); 
    call CLOCK.clr();
  }

  static inline void reset()
  {
    int i;

    call DATA.makeOutput();
    call DATA.set();
    call CLOCK.clr();
    for (i=0;i<9;i++) {
      call CLOCK.set();
      delay();
      call CLOCK.clr();
    }
  }

  static inline char processCommand(int cmd)
  {
    int i;
    int CMD=cmd;

    cmd &= 0x1f;
    call InterruptDATA.disable();
    reset();           
    initseq();        //sending the init sequence
    for(i=0;i<8;i++){
      if(cmd & 0x80) call DATA.set();
      else call DATA.clr();
      cmd = cmd << 1 ;
      call CLOCK.set();
      delay();              
      delay();              
      call CLOCK.clr();        
    }
    call DATA.makeInput();
    delay();
    call CLOCK.set();
    delay();
    if(call DATA.get()) {
      reset(); 
      return 0; 
    }
    delay();
    call CLOCK.clr();
    if( CMD==TEMP_COMMAND || CMD==HUM_COMMAND){
      call InterruptDATA.enableFallingEdge();
    }
    return 1;
  }

  command error_t SensirionSht15.reset[ uint8_t client ]() { 
    currentClient = client;
    atomic { state=IDLE;  pending_states=0x0;}
    call InterruptDATA.disable();
    call CLOCK.makeOutput();
    reset();
    processCommand(SOFT_RESET);
    //call Timer.startOneShot( TIMEOUT_RESET );
    return SUCCESS;
  }

  // Start gathering temperature reading.
  task void initiateTemperature() {
    if(state != IDLE) {
      pending_states |= TEMP_PENDING; 
      return;
    }
    state=TEMP_MEASUREMENT;
    processCommand(TEMP_COMMAND);
    //call Timer.startOneShot( TIMEOUT_12BIT )
    return;
  }

  // Start gathering a humidity reading.
  task void initiateHumidity() {
    if (state!= IDLE) {
      pending_states |= HUM_PENDING;
      return;
    }
    state = HUM_MEASUREMENT;
    processCommand(HUM_COMMAND);
    //call Timer.startOneShot( TIMEOUT_12BIT )
    return;
  }

  task void readSensor()
  {
    char i;
    char CRC=0;
    uint16_t data;
    uint16_t temp,hum;

    data=0; 
    for(i=0;i<8;i++){
      call CLOCK.set();   
      delay();
      data |= call DATA.get();
      data = data << 1;
      //    if(i!=7) data = data << 1;
      call CLOCK.clr();
    }
    ack();

    for(i=0;i<8;i++){
      call CLOCK.set();   
      delay();
      data |= call DATA.get();
      //    data = data << 1;
      if(i!=7) data = data << 1;  //the last byte of data should not be shifted
      call CLOCK.clr();
    }

    ack();

    for(i=0;i<8;i++){           //I am not cheching the checksum
      call CLOCK.set();   
      delay(); 
      CRC |= call DATA.get();
      if(i!=7) CRC = CRC << 1;
      call CLOCK.clr();
    }

    //ack with high as it should be for the CRC ack
    call DATA.makeOutput();
    call DATA.set();          
    delay();
    call CLOCK.set();
    delay();
    call CLOCK.clr();

    if(state==TEMP_MEASUREMENT){
      temp=data;
      signal SensirionSht15.measureTemperatureDone[currentClient](SUCCESS, temp);      
      if(pending_states & HUM_PENDING) { pending_states=0; post initiateHumidity();}
    }
    else if(state==HUM_MEASUREMENT) {
      hum=data;
      signal SensirionSht15.measureHumidityDone[currentClient](SUCCESS, hum);
      if(pending_states & TEMP_PENDING) {pending_states=0;  post initiateTemperature();}
    }
    state=IDLE;
  } 

  command error_t SensirionSht15.measureTemperature[ uint8_t client ]()
  {
    currentClient = client;
    if(!post initiateTemperature()) return FAIL;
    return SUCCESS;
  }

  command error_t SensirionSht15.measureHumidity[ uint8_t client ]()
  {
    currentClient = client;
    if(!post initiateHumidity()) return FAIL;
    return SUCCESS;
  }

  event void Timer.fired() {
    signal SensirionSht15.resetDone[currentClient]( SUCCESS );
  }

  async event void InterruptDATA.fired() {
    call InterruptDATA.disable();
    post readSensor();
  }

  default event void SensirionSht15.resetDone[uint8_t client]( error_t result ) { }
  default event void SensirionSht15.measureTemperatureDone[uint8_t client]( error_t result, uint16_t val ) { }
  default event void SensirionSht15.measureHumidityDone[uint8_t client]( error_t result, uint16_t val ) { }
}

