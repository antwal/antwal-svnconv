#include "stm32f10x.h"
#include<stm_spi_master.h>
#include "cox_pio.h"
#include "stm32_pio.h"
#include "buffer.h"
#include "powermgmnt.h"
#include "debug.h"
#include "string.h"
#include "time.h"

cBuffer spi_buff;
unsigned char spi_buffer[30];
power_status power;
batt_percentage charge;

struct power_status power =
{
		.bat1 = 6800,
		.bat2 = 6800,
		.sol = 0,
		.supply = 0,
};


/*
 * This function parses the received packet for esacpe characters
 */
void Parse(uint8_t *Packet)
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

/*
 *  Checksum checker
 */
uint8_t  checksum(char *var)
{
	uint8_t locl = 0,i = 0;

	for(i = 1 ; i <= (PACKET_SIZE - 3); i++)
	{
		locl += var[i];
	}
	locl = ~locl;
	debug(CONSOLE,"chk=%x,%x\n\r",locl, var[PACKET_SIZE - 2]);
	if(locl == var[PACKET_SIZE-2]){
		debug(CONSOLE,"%s\n\r","chksum matched");
		return 1;
	}
	else
		return 0;

}

powerState powerLogic(power_status *powerVar)
{
	powerState pwrstate = powerInvalid;
	power.bat1 = (power.bat1 + powerVar->bat1) / 2;
	power.bat2 = (power.bat2 + powerVar->bat2) / 2;
	power.sol = (power.sol + powerVar->sol) / 2;
	power.supply = (power.supply + powerVar->supply) / 2;

	// Calculating the charge percentage of batteries
	if(power.bat1 > BAT_MIN)
	charge.bat1 = (power.bat1 - BAT_MIN) / 12 ;
	else
		charge.bat1 = 0;
	if(power.bat2 > BAT_MIN)
	charge.bat2 = (power.bat2 - BAT_MIN) / 12 ;
	else
		charge.bat2 = 0;

	//Solar percentage calculation between 9:0am to 5:0pm
	if(!isTime(9,0,GREATER) && !isTime(17,0,LESSER))
	{
		if(power.sol > SOL_MIN)
			charge.sol = (power.sol - SOL_MIN) / 70;
		else
			charge.sol = 0;
	}
	else
		charge.sol = 0;

	//Power state decision baased on battery voltages and solar percentage
	if((power.bat1 <= BAT_MAX && power.bat1 >= BAT_30 ) || (power.bat2 <= BAT_MAX && power.bat2 >= BAT_30) || (charge.sol <= 100 && charge.sol >= 40 ))
	{
		pwrstate = powerGood;
		debug(CONSOLE,"%s\n\r","Power Good");
	}
	else
	if((power.bat1 <= BAT_30 && power.bat1 >= BAT_15 )  || (power.bat2 <= BAT_30 && power.bat2 >= BAT_15 ) || (charge.sol <= 40 && charge.sol >= 20 ))
	{
		pwrstate = powerMedium;
		debug(CONSOLE,"%s\n\r","Power Medium");
	}
	if((power.bat1 <= BAT_15 && power.bat1 >= BAT_MIN ) || (power.bat2 <= BAT_15 && power.bat2 >= BAT_MIN) || (charge.sol <= 20 && charge.sol >= 0 ))
	{
		pwrstate = powerLow;
		debug(CONSOLE,"%s\n\r","Power Low");
	}
	else
	if((power.bat1 <= BAT_MIN && power.bat1 >= IDLE_VOL ) || (power.bat2 <= BAT_MIN && power.bat2 >= IDLE_VOL))
	{
		pwrstate = powerCritical;
		debug(CONSOLE,"%s\n\r","Power Critical");
	}
	else
	{
		pwrstate = powerDown;
		debug(CONSOLE,"%s\n\r","Power Down");
	}

	return pwrstate;
}



powerState powerHandler(void)
{
	char recv[sizeof(power_status)+ 10], ch;
	uint32_t i,j;
	uint8_t dataGot = 0, datarecvd = 0, ret = powerCritical;
	static uint8_t powerAlive = 0;
	power_status *tempPower;

		i =0;
		while(bufferDataAvail(&spi_buff))
		{
			ch = spi_read();
			if(dataGot) {
				if (!((i == 1) && (ch == START_BYTE))) {

					recv[i++] = ch;

					if (ch == STOP_BYTE) {
						//debug(CONSOLE,"%s\n\r","Data is: ");
						//for (j=0; j < i; j++){
							//debug(CONSOLE,"\t%x ",recv[j]);
						//}
						//debug(CONSOLE,"%s","\n\r");
						// remove escape characters
						SPI_RESET();						// Once we got the packet we can reset spi to keep it sync
						Parse(recv);
						if(checksum(recv))
						{
							datarecvd = 1;
							tempPower = (power_status *)&recv[1];
							debug(CONSOLE,"batt1=%d\tbatt2=%d\tsolar=%d\tsup=%d\n\r",tempPower->bat1,tempPower->bat2,tempPower->sol,tempPower->supply);
							ret = powerLogic(tempPower);
						}
						dataGot = 0;
						i = 0;
					}
				}
				else
				{
					i = 0;
					ch =0;
					dataGot =0;
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
			datarecvd = 0;
			powerAlive = 0;
		}
		else
		{
			powerAlive++;
			// Data is not received from charge controller since 6 * 20 secs
			if(powerAlive >= 6)
			{
				charge.bat1 = -1;
				charge.bat2 = -1;
				charge.sol = -1;
				ret = powerInvalid;
			}
		}
		SPI_RESET();

		return ret;
}


