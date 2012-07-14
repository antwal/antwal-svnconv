#include "stm32f10x.h"
#include<stm_spi_master.h>
#include "cox_pio.h"
#include "stm32_pio.h"
#include "buffer.h"


COX_PIO_Dev ss = COX_PIN(2,8);
cBuffer spi_buff;

#define SPI_RESET()		SPI2->CR1 |= 0x100; SPI2->CR1 &= ~0x100



void ParsePkt(uint8_t *Packet)
{
	int32_t i=1, j=1;

	for(; Packet[i] != STOP_BYTE; ) {
    	if (Packet[i] == ESC_CHAR) {
			Packet[j++] = Packet[++i] ^ 0X20;
			i++;
    	} else {
	    	Packet[j++] = Packet[i++];
		}
	}

}

uint8_t  checksum(char *var)
{
	uint8_t locl = 0,i = 0;

	for(i = 1 ; i <= (PACKET_SIZE - 3); i++)
	{
		locl += var[i];
	}
	locl = ~locl;
	printf("chk=%x,%x\n\r",locl, var[PACKET_SIZE - 2]);
	if(locl == var[PACKET_SIZE-2]){
		printf("chksum matched\n\r");
		return 1;
	}
	else
		return 0;

}


void SPI_Example(void)
{
	uint8_t data1= 0x10;
	char recv[sizeof(power_status)+ 10], ch;
	float data2, data=10.10;
	uint32_t i,j;
	uint8_t dataGot = 0, datarecvd = 0;
	power_status *power;
	bufferInit(&spi_buff,spi_buffer,50);

	//ss = COX_PIN(2,8);

	pi_pio.Init(ss);
	pi_pio.Dir(ss,1);

	printf("in SPI\n\r");
	/*SPI1 As Master Service,SPI2 As Slave Service,SPI1 transmit data to SPI2*/
	pi_spi1.Init(COX_SPI_MODE0, 2);


	pi_spi1.Cfg(COX_SPI_CFG_MODE,COX_SPI_MODE1,0);
	pi_spi1.Cfg(COX_SPI_CFG_RATE,SPI_BaudRatePrescaler_4,0);
	pi_spi1.Cfg(COX_SPI_CFG_BITS,8,0);
	pi_spi1.Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);

	//pi_spi2.Cfg(COX_SPI_CFG_MODE,COX_SPI_MODE0,0);
	//pi_spi2.Cfg(COX_SPI_CFG_RATE,SPI_BaudRatePrescaler_16,0);
	pi_spi2.Cfg(COX_SPI_CFG_BITS,8,0);
	pi_spi2.Cfg(COX_SPI_CFG_FSB,COX_MSPI_FSB_MSB,0);
	pi_spi2.Init(COX_SPI_MODE0, SPI_BaudRatePrescaler_16);

	printf("After spi init \n\r");
	//for(i =0;i<10;i++){
		//printf("Writing\n\r");
		//pi_spi1.Write(wbuf, 10);
	//}

	for(;;)
	{
		//printf("Reading\n\r");
		//pi_spi1.ReadWrite(data1);

		//printf("Sample=%f\n\r",data);
		pi_pio.Out(ss,0);
		for(i =0; i < 65550; i++)
			for(j= 0; j< 10; j++);

		i =0;

		while(bufferDataAvail(&spi_buff))
		{
			ch = spi_read();
			if(dataGot) {
				if ((i == 1) && (ch == START_BYTE)) {
					break;
				}

			recv[i++] = ch;

				if (ch == STOP_BYTE) {
					printf("\nData is: ");
					for (j=0; j < i; j++){
						printf("\t%x ",recv[j]);
					}
					printf("\n\r");
					// remove escape characters
					SPI_RESET();						// Once we got the packet we can reset spi to keep it sync
					ParsePkt(recv);
					if(checksum(recv))
					{
						datarecvd = 1;
					}
					dataGot = 0;
					i = 0;
				}
			}
			else {
				if (ch == START_BYTE) {
					dataGot = 1;
					recv[i++] = START_BYTE;
					if(i > 20)						// This condition if garbage data is recevied
					{
						SPI_RESET();
					}
				}
			}
		}

		if(datarecvd == 1)
		{
			power = (power_status *)&recv[1];
			printf("batt1=%d\tbatt2=%d\tsolar=%d\tsup=%d\n\r",power->bat1,power->bat2,power->sol,power->supply);
			datarecvd = 0;
		}
		SPI_RESET();
		pi_pio.Out(ss,1);
		for(i =0; i < 65550; i++)
			for(j= 0; j< 10; j++);

		//data1 = pi_spi2.ReadWrite(0xff);
		//printf("read=%x\n\r",data1);
		//j =0;
		//for(i = 0; i< 6; i++)
		//recv[i] = pi_spi2.ReadWrite(0x55);
		//printf("data=%s\n\r",recv);

		//pi_spi2.Read(recv,4);
		//data2 = *(float *)recv;
		//printf("data=%f\n\r",data2);


		//for(i =0; i < 65550; i++)
			//for(j= 0; j< 10; j++);

		//pi_spi2.Read(&data2,4);
		//printf("data=%f\n\r",data2);
	//	++data1 ;
	}


}
