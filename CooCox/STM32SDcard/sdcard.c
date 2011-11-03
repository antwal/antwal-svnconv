// see header for credits

#include "mmc.h"
#include <stdio.h>

// Macros for setting slave select:
//
void SPI_SS_HIGH(MSD_Dev *MSD) {
	MSD->pio->Out(MSD->cs_pin, 0);

	}
void SPI_SS_LOW(MSD_Dev *MSD){MSD->pio->Out(MSD->cs_pin, 1);}


//static volatile diskstates disk_state;


static byte spiTransferByte(MSD_Dev *MSD,byte data)
{
	return(MSD->spi->ReadWrite(data));
}

static uint32_t spiTransferLong(MSD_Dev *MSD, const uint32_t data)
{
	byte j=0,i=0;
	byte Frame[4];

	Frame[0] = (uint8_t)(data>>24);
	Frame[1] = (uint8_t)(data>>16);
	Frame[2] = (uint8_t)(data>>8);
	Frame[3] = (uint8_t)(data);

	i = MSD->spi->ReadWrite(Frame[0]);
	j = j|i<<24;
	i = MSD->spi->ReadWrite(Frame[1]);
	j = j|i<<16;
	i = MSD->spi->ReadWrite(Frame[2]);
	j = j|i<<8;
	i = MSD->spi->ReadWrite(Frame[3]);

	j |= i;
	return j;
}
/*
static uint32_t spiTransferLong(MSD_Dev *MSD,const uint32_t data)
{
  // It seems to be necessary to use the union in order to get efficient
  // assembler code.
  // Beware, endian unsafe union
  union {
    unsigned long l;
    unsigned char c[4];
  }
  long2char;

  long2char.l = data;

  // send the given data
  SPDR = long2char.c[3];
  // wait for transfer to complete
  loop_until_bit_is_set(SPSR, SPIF);
  long2char.c[3] = SPDR;

  SPDR = long2char.c[2];
  // wait for transfer to complete
  loop_until_bit_is_set(SPSR, SPIF);
  long2char.c[2] = SPDR;

  SPDR = long2char.c[1];
  // wait for transfer to complete
  loop_until_bit_is_set(SPSR, SPIF);
  long2char.c[1] = SPDR;

  SPDR = long2char.c[0];
  // wait for transfer to complete
  loop_until_bit_is_set(SPSR, SPIF);
  long2char.c[0] = SPDR;

  return long2char.l;
}
*/

static char sdResponse(MSD_Dev *MSD,byte expected)
{
  unsigned short count = 0x0FFF;

  while ((spiTransferByte(MSD,0xFF) != expected) && count )
    count--;

  // If count didn't run out, return success
  return (count != 0);
}


static char sdWaitWriteFinish(MSD_Dev *MSD)
{
  unsigned short count = 0xFFFF; // wait for quite some time

  while ((spiTransferByte(MSD,0xFF) == 0) && count )
    count--;

  // If count didn't run out, return success
  return (count != 0);
}


static void deselectCard(MSD_Dev *MSD) {
  // Send 8 clock cycles
  SPI_SS_HIGH(MSD);
  spiTransferByte(MSD,0xff);
}

static byte crc7update(byte crc, const byte data) {
  byte i;
  byte bit;
  byte c;

  c = data;
  for (i = 0x80; i > 0; i >>= 1) {
    bit = crc & 0x40;
    if (c & i) {
      bit = !bit;
    }
    crc <<= 1;
    if (bit) {
      crc ^= 0x09;
    }
  }
  crc &= 0x7f;
  return crc & 0x7f;
}


/**
 * sendCommand - send a command to the SD card
 * @command  : command to be sent
 * @parameter: parameter to be sent
 * @deselect : Flags if the card should be deselected afterwards
 *
 * This function calculates the correct CRC7 for the command and
 * parameter and transmits all of it to the SD card. If requested
 * the card will be deselected afterwards.
 */
uint16_t sendCommand(MSD_Dev *MSD, const byte  command,const uint32_t parameter,const byte  deselect) {
  union {
    unsigned long l;
    unsigned char c[4];
  }
  long2char;

  byte  i,crc,errorcount;
  uint16_t counter;

  long2char.l = parameter;
  crc = crc7update(0  , 0x40+command);
  crc = crc7update(crc, long2char.c[3]);
  crc = crc7update(crc, long2char.c[2]);
  crc = crc7update(crc, long2char.c[1]);
  crc = crc7update(crc, long2char.c[0]);
  crc = (crc << 1) | 1;

  errorcount = 0;
  while (errorcount < CONFIG_SD_AUTO_RETRIES) {
    // Select card
    SPI_SS_LOW(MSD);

    // Transfer command
    spiTransferByte(MSD,0x40+command);
    spiTransferLong(MSD,parameter);
    spiTransferByte(MSD,crc);

    // Wait for a valid response
    counter = 0;
    do {
      i = spiTransferByte(MSD,0xff);
      counter++;
	//printf("Response=%d\n\r",i);

    }
    while (i & 0x80 && counter < 0x10);

    // Check for CRC error
    // can't reliably retry unless deselect is allowed
    if (deselect && (i & STATUS_CRC_ERROR)) {
      //      uart_putc('x');
      //deselectCard(MSD);
      errorcount++;
      continue;
    }

    //if (deselect) deselectCard(MSD);
    break;
  }

  return i;
}

/**
 * sendCommand - send a command to the SD card
 * @command  : command to be sent
 * @parameter: parameter to be sent
 * @deselect : Flags if the card should be deselected afterwards
 *
 * This function calculates the correct CRC7 for the command and
 * parameter and transmits all of it to the SD card. If requested
 * the card will be deselected afterwards.
 */
uint32_t sendCommand32(MSD_Dev *MSD, const byte  command,const uint32_t parameter,const byte  deselect) {
  union {
    unsigned long l;
    unsigned char c[4];
  }
  long2char;

  byte  j,crc,errorcount;
  long i;
  uint16_t counter;

  long2char.l = parameter;
  crc = crc7update(0  , 0x40+command);
  crc = crc7update(crc, long2char.c[3]);
  crc = crc7update(crc, long2char.c[2]);
  crc = crc7update(crc, long2char.c[1]);
  crc = crc7update(crc, long2char.c[0]);
  crc = (crc << 1) | 1;

  errorcount = 0;
  while (errorcount < CONFIG_SD_AUTO_RETRIES) {
    // Select card
    SPI_SS_LOW(MSD);

    // Transfer command
    spiTransferByte(MSD,0x40+command);
    spiTransferLong(MSD,parameter);
    spiTransferByte(MSD,crc);

    // Wait for a valid response
    counter = 0;
    do {
      j = spiTransferByte(MSD,0xff);
      counter++;
	//printf("Response=");
	//Serial.print(i, BYTE);
    }
    while (j & 0x80 && counter < 0x10);

	counter = 0;

      j = spiTransferByte(MSD,0xff);
			//Serial.print(j, BYTE);
			i= j<<24;
			j = spiTransferByte(MSD,0xff);
			//Serial.print(j, BYTE);
			i= i|j<<16;
			j = spiTransferByte(MSD,0xff);
			//Serial.print(j, BYTE);
			i= i|j<<8;
			j = spiTransferByte(MSD,0xff);
			//Serial.print(j, BYTE);
			i= i|j;

    // Check for CRC error
    // can't reliably retry unless deselect is allowed
    if (deselect && (i & STATUS_CRC_ERROR)) {
      //      uart_putc('x');
      deselectCard(MSD);
      errorcount++;
      continue;
    }

    if (deselect) deselectCard(MSD);
    break;
  }

  return i;
}

byte initialize(MSD_Dev *MSD) {
  byte  i,ACMD1=1;
  uint16_t counter;
  uint32_t answer,j;

 printf("In MMC initialise");
  //disk_state = DISK_ERROR;


  SPI_SS_HIGH(MSD);

  // Send 80 clks
  for (i=0; i<10; i++) {
    spiTransferByte(MSD,0xFF);
  }

  // Reset card
  i = sendCommand(MSD,GO_IDLE_STATE, 0, 1);
  if (i != 1) {
	printf("Reset Failed");
    return STA_NOINIT | STA_NODISK;
  }


counter = 0xffff;

  do {
    // Send CMD8: SEND_IF_COND
    j = sendCommand32(MSD,SEND_IF_COND, 0x000001AA, 0);
	printf("IF_COND=0x%x\n\r",j);
//	Serial.print(j, HEX);
    if (j > 1) {
      // kills my Sandisk 1G which requires the retries in the first place
      // deselectCard();
    }
  }
  while (i > 1 && counter-- > 0);
  counter = 0xffff;


  // According to the spec READ_OCR should work at this point
  // without retries. One of my Sandisk-cards thinks otherwise.
  do {
    // Send CMD58: READ_OCR
    i = sendCommand(MSD,READ_OCR, 0, 0);
	printf("READ_OCR=0x%x\t",i);
	//Serial.print(i, HEX);
    if (i > 1) {
      // kills my Sandisk 1G which requires the retries in the first place
      // deselectCard();
    }
  }
  while (i > 1 && counter-- > 0);

 /* if (counter > 0) {
    answer = (MSD,0);
    printf("answer=0x%x\n\r",answer);

  // See if the card likes our supply voltage
    if (!(answer & SD_SUPPLY_VOLTAGE)) {
      // The code isn't set up to completely ignore the card,
      // but at least report it as nonworking
      deselectCard(MSD);
			printf("Nonworking\n");
      return STA_NOINIT | STA_NODISK;
    }
  }*/

  printf("CMD55\n\r");


 counter = 0xff;

  do {
    i = sendCommand( MSD,APP_CMD, 0, 1);

    counter--;
	printf("0x%x\t",i);
  }
  while (i != 1 && counter > 0);

  if (counter==0) {
	printf("CMD55 Failed");

  }
	else{
		printf("CMD55 Success");
	}


  counter = 0x10;
  printf("SD_SEND_OP_COND\n\r");
do {
    i = sendCommand(MSD,SD_SEND_OP_COND, 0x40000000, 0);
    counter--;
    printf("0x%x\t",i);
  }
  while (i != 0 && counter > 0);

  if (counter==0) {
	printf("CMD41 Failed");
	ACMD1=0;
	}
	else{
				ACMD1 = 1;
				printf("SD Ver 2");
	}
    //return STA_NOINIT | STA_NODISK;

  printf("CMD55-2\n\r");

counter = 0xff;

  do {
    i = sendCommand(MSD, APP_CMD, 0, 1);

    counter--;
	//Serial.print(i , HEX);
  }
  while (i != 1 && counter > 0);

  if (counter==0) {
	printf("CMD55 Failed");

  }
	else{
		printf("CMD55 Success");
	}

if(ACMD1==0){
counter = 0xff;
do {
    i = sendCommand(MSD,SD_SEND_OP_COND, 0, 0);
    counter--;
	//Serial.print(i , HEX);
  }
  while (i != 0 && counter > 0);

  if (counter==0) {
	printf("CMD41 Failed");
	ACMD1=0;
    //return STA_NOINIT | STA_NODISK;
  }
	else{
		ACMD1=1;
		printf("SD Ver 1");
	}
}

if(ACMD1==0){
// Keep sending CMD1 (SEND_OP_COND) command until zero response


counter = 0xf;
  do {
    i = sendCommand(MSD,SEND_OP_COND, 0, 1);
//    i = sendCommand(SD_SEND_OP_COND, 1L<<30, 1);
    counter--;
	//Serial.print(i , HEX);
  }
  while (i != 0 && counter > 0);

  if (counter==0) {
	printf("CMD1 Failed");
    return STA_NOINIT | STA_NODISK;
  }
}
  // Send MMC CMD16(SET_BLOCKLEN) to 512 bytes
  i = sendCommand(MSD,SET_BLOCKLEN, 512, 1);
	printf("Block");
	printf("  0x%x\n\r",i);

  if (i != 0) {
	printf("CMD16 Failed");
    return STA_NOINIT | STA_NODISK;
  }


	printf("Done");
  // Thats it!
 // disk_state = DISK_OK;
  return RES_OK;
}


byte readSectors(MSD_Dev *MSD,byte *buffer, uint32_t sector, byte count) {
  byte sec,res,tmp,errorcount;
  uint16_t crc,recvcrc;

  for (sec=0;sec<count;sec++) {
    errorcount = 0;
    while (errorcount < CONFIG_SD_AUTO_RETRIES) {
      res = sendCommand(MSD,READ_SINGLE_BLOCK, (sector+sec) << 9, 0);

      if (res != 0) {
        SPI_SS_HIGH(MSD);
//        disk_state = DISK_ERROR;
        return RES_ERROR;
      }

      // Wait for data token
      if (!sdResponse(MSD,0xFE)) {
        SPI_SS_HIGH(MSD);
//        disk_state = DISK_ERROR;
        return RES_ERROR;
      }

      uint16_t i;

      // Get data
      crc = 0;
      for (i=0; i<512; i++) {
        tmp = spiTransferByte(MSD,0xff);
        *(buffer++) = tmp;
      }

      // Check CRC
      recvcrc = (spiTransferByte(MSD,0xFF) << 8) + spiTransferByte(MSD,0xFF);

      break;
    }
    deselectCard(MSD);

    if (errorcount >= CONFIG_SD_AUTO_RETRIES) return RES_ERROR;
  }

  return RES_OK;
}


byte readSectors2(MSD_Dev *MSD,byte *buffer, uint32_t sector, byte count, uint16_t offset1, uint16_t offset2) {
  byte sec,res,tmp,errorcount;
  uint16_t crc,recvcrc;

  // offset1 refers to the place where to start writting on the buffer
  // offset2 keeps track of how much is the offset from where to read
  // offset1 + offset2 = BYTESPERSECTOR in the first call
  // after that, offset1 will become 0 and offset2 will keep size
  // until the end, when we will have to consider adding EOFs
  buffer += offset1;

  for (sec=0;sec<count;sec++) {
    errorcount = 0;
    while (errorcount < CONFIG_SD_AUTO_RETRIES) {
      res = sendCommand(MSD,READ_SINGLE_BLOCK, (sector+sec) << 9, 0);

      if (res != 0) {
        SPI_SS_HIGH(MSD);
//        disk_state = DISK_ERROR;
        return RES_ERROR;
      }

      // Wait for data token
      if (!sdResponse(MSD,0xFE)) {
        SPI_SS_HIGH(MSD);
 //       disk_state = DISK_ERROR;
        return RES_ERROR;
      }

      uint16_t i;

      // Get data for the first half of the package
      crc = 0;
      if (offset1 + offset2 == BYTESPERSECTOR)
      {
        // case when we come in the first time
        // the first half of the buffer is filled up
        // with the data from the other file
        for (i=0; i<offset2; i++) {
          tmp = spiTransferByte(MSD,0xff);
          *(buffer++) = tmp;
        }
        // finish reading the block to avoid errors
        for (i=offset2; i<512; i++) {
          tmp = spiTransferByte(MSD,0xff);
        }
      }
      else {
        // case when we are starting with an empty buffer, but with offset
        // the first offset2 bytes are there from the last time
        for (i=0; i<offset2; i++) {
          tmp = spiTransferByte(MSD, 0xff);
        }
        // the second 512-offset2 bytes gotta be stored in the array
        for (i=offset2; i<512; i++) {
          tmp = spiTransferByte(MSD,0xff);
          *(buffer++) = tmp;
        }
      }

      // Check CRC
      recvcrc = (spiTransferByte(MSD,0xFF) << 8) + spiTransferByte(MSD,0xFF);

      break;
    }
    deselectCard(MSD);

    if (errorcount >= CONFIG_SD_AUTO_RETRIES) return RES_ERROR;
  }

  return RES_OK;
}


byte writeSectors(MSD_Dev *MSD,const byte *buffer, uint32_t sector, byte count) {
  byte res,sec,errorcount,status;
  uint16_t crc;

  for (sec=0;sec<count;sec++) {
    errorcount = 0;
    while (errorcount < CONFIG_SD_AUTO_RETRIES) {
      res = sendCommand(MSD,WRITE_BLOCK, (sector+sec)<<9, 0);

      if (res != 0) {
        SPI_SS_HIGH(MSD);
   //     disk_state = DISK_ERROR;
        return RES_ERROR;
      }

      // Send data token
      spiTransferByte(MSD,0xFE);

      uint16_t i;
      const byte *oldbuffer = buffer;

      // Send data
      crc = 0;
      for (i=0; i<512; i++) {
        spiTransferByte(MSD,*(buffer++));
      }

      // Send CRC
      spiTransferByte(MSD,crc >> 8);
      spiTransferByte(MSD,crc & 0xff);

      // Get and check status feedback
      status = spiTransferByte(MSD,0xFF);

      // Retry if neccessary
      if ((status & 0x0F) != 0x05) {
        //	uart_putc('X');
        deselectCard(MSD);
        errorcount++;
        buffer = oldbuffer;
        continue;
      }

      // Wait for write finish
      if (!sdWaitWriteFinish(MSD)) {
        SPI_SS_HIGH(MSD);
 //       disk_state = DISK_ERROR;
        return RES_ERROR;
      }
      break;
    }
    deselectCard(MSD);

    if (errorcount >= CONFIG_SD_AUTO_RETRIES) {
      if (!(status & STATUS_CRC_ERROR))
//        disk_state = DISK_ERROR;
      return RES_ERROR;
    }
  }

  return RES_OK;
}
