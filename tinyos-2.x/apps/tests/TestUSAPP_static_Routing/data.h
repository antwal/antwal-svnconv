

#include <message.h>      // Message Packet structures and Typedefs (Similar to AM.h and message.h) 


// Sensor IDs 
#define TEMPERATURE             0x00		// Sensirion (SHT75)
#define RELATIVE_HUMIDITY       0X01  		// Sensirion (SHT75)
#define VOLTAGE                 0x02
#define RAIN_FALL               0X03
#define SOIL_MOISTURE           0X04                  
#define SOIL_TEMPERATURE        0X05
#define WIND_SPEED              0X06  
#define WIND_DIRECTION          0X07
#define LEAF_WETNESS            0X08
#define SOLAR_RADIATION         0X09
#define HTF_TEMPERATURE         0x0A		// Humirel (HTF3223)
#define HTF_RELATIVE_HUMIDITY   0X0B  		// Humirel (HTF3223)

#define NUM_RECORDS             6               // Sensor Records (Possible number of sensors that can be connected to a mote)
#define SAMPLE_RECORD_FREE      -1              // Value of Sensing Periodicity indicating Free Sensor Record

// Leaf Wetness threshold(in milliVolts) &
// Number of readings collected before sending a packet
#define WETNESS_THRESHOLD 400
#define LWETNESS_COUNT 30 

// Sampling Timer Period
#define SAMPLING_TIMER_PERIOD 1024U

// Humidity Sensing Period
#define HUM_SENSING_PERIOD 2048U


uint16_t TOS_LOCAL_ADDRESS = 116;			// Node ID/Address

// Sensor Record Indexes
enum {
	SHT_TEMP = 0,
	SHT_HUMID,
	HTF_TEMP,
	HTF_HUMID,
	LEAF_WET,
	EXT_VOLTAGE,
};

enum {
	AM_UAGRI_MSG = 63, 			// Active Message Type
	BASE_STATION_ADDRESS = 0,		// Sink Node Address
	EXCITATION_PIN = 3,			// Excitation Pin for HTF3223 Sensors
	CHANNEL = 20				// RF Channel for Communication
};

enum {
	IDLE = 0,				// Radio Idle State
	SENDING = 1				// Radio Busy State
};


// Sensor Periodicities in Minutes
enum {
	// Sensirion (SHT75)
	SHT_TEMP_PERIODICITY =  60,		
	SHT_HUMI_PERIODICITY =  60,
	// Humirel (HTF3223)
	HTF_TEMP_PERIODICITY = -1,  // 60
	HTF_HUMI_PERIODICITY = -1,  // 60
	// Leaf Wetness
	WETNESS_PERIODICITY = -1   // 2
};

// Excitation Pin Name (Used by HTF3223 Sensors)
#define EXCITATION	P0_3
// Packet (Tinyos Message) Header Length 
//#define HEADER_LEN	11			// Includes fields length(2),
// Routing Header Length 
#define ROUTING_HEADER_LEN 4 	
// Application Data Length ( sizeof(struct SensedData) )
#define DATA_LEN	8


// Sensed Data Packet Structure
typedef struct SensedData{
uint8_t node_id;   				// Mote ID as specified while programming 
uint8_t sensor_id; 				// Sensor ID (Check the macros above)
char crop_id[2];  				// CROP ID  ('C1' for GroundNut)	
uint16_t plot_id;  				// PLOT_ID  (1 for Anantapur Deployment)	
uint16_t value;    				// ADC value 
}SensedData;

