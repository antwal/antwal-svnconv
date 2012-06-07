#include "powermgmnt.h"
#include "power.h"
#include "debug.h"
#include "config.h"
#include "string.h"
#include "watchdog.h"
#include "task.h"
#include "modem.h"
#include "WSNPacket.h"
#include "timevar.h"
#include "status.h"

uint32_t PERIOD;
// USed for appending data from send.xml to alldata.xml
uint8_t lclbuff[100];

void * setTaskUploadProfile( void ){
	taskPwr *pptr;
	pptr = &myTaskPwr[1];
	//Initilize the power structure for wsn task
	pwrInit(pptr, UPLOAD);

	//As there are five power state we will have to add 5 functions
	pwrAddMap( pptr,powerInvalid, taskUploadRedFreq);
	pwrAddMap( pptr,powerGood, taskUploadGen);
	pwrAddMap( pptr,powerMedium, taskUploadRedFreq);
	pwrAddMap( pptr,powerLow, taskUploadStop);
	pwrAddMap( pptr,powerCritical, taskUploadStop);
	pwrAddMap( pptr,powerDown, taskUploadStop);
	pwrAddDefault(pptr,taskUploadStop);

	return (void*)pptr;
}

void * taskUploadGen(void *pdata)
{
	PERIOD = sysconfdup.upload_freq;
	Upload(pdata);
}

void * taskUploadRedFreq(void *pdata)
{
	PERIOD = sysconfdup.upload_freq_night;
	Upload(pdata);
}

extern uint8_t statusUpload;

void * taskUploadStop(void *pdata)
{
//	PERIOD = &sysconfdup.upload_freq;
	dogDebug *dptr = (dogDebug *) pdata;
	WDG_setTaskState(dptr , WAIT);
	debug(LOG,"%s\n\r","UPLOAD:Power Low");
	statusUpload = 13;
	CoTickDelay(3000);
	PERIOD =0;

}

void * Upload(void *pdata)
{
	dogDebug *dptr = (dogDebug *) pdata;
	char buff[16]= "0.0.0.0";
	modm.ip_addr = buff;
	uint8_t res, ntp_update =0;
	uint32_t br, bw;
	server tcp;

	TIME_SET(0);
	tcp.port ="80";
	tcp.addr = &sysconfdup.uploadsite[0];

	if(powerLevel == powerGood)
		debug(LOG,"%s\n\r","UPLOAD:Power Good");
	else if(powerLevel == powerMedium)
		debug(LOG,"%s\n\r","UPLOAD:Power Medium");

	WDG_setTaskState(dptr , NTP_TIME);
	mdmLock(&modm);					// Get modem lock
	for(ntp_update =0; ntp_update < 3; ntp_update++){
		WDG_setTaskState(dptr , NTP_TIME);
		res = ntp_time(&modm, 0);
		if(res == mdmOK){
			break;
		}
	}

	// Upload the status file
	if(statusUpload <= 1)
	{
		debug(LOG,"%s\n\r","Uploading Status file..");
		res = uploadFile(&modm, "./root/status.xml", &tcp);
		CoEnterMutexSection(file_mutex);
		if(res == mdmOK)
		f_unlink("./root/status.xml");		// Delete the file
		CoLeaveMutexSection(file_mutex);
		statusUpload = 13;
	}

	/*
	 *  If send.xml file exists that means last uploading was unsuccessful.
	 *  so  first upload the send.xml data of previous failed
	 *  upload trial.
	 * 	If file is not present that means last upload is successful
	 * 	so rename the store.xml to send.xml and try to upload.
	 *  once send.xml is uploaded, append the send.xml to alldata.xml.
	 *  Then delete the send.xml file.
	 */
	debug(LOG,"%s\n\r","Uploading file..");
	res = f_open(&send, "./root/send.xml", FA_READ);
	f_close(&send);

	// If send.xml file does not exists
	if(res == FR_NO_FILE)
	{
		CoEnterMutexSection(file_mutex);
		// Copy store.xml to send.xml
		res = f_rename("./root/store.xml", "./root/send.xml");
		CoLeaveMutexSection(file_mutex);
		debug(CONSOLE,"rename=%d\n\r",res);
		chk[0] = 0;						// to indicate SD is working fine

		if(res == 0){
			WDG_setTaskState(dptr , UPLOADING);
			// Start Timer
			timeInterval(1,START);
			res = uploadFile(&modm, "./root/send.xml", &tcp);
			sysstatus.uploadTime = timeInterval(1,END);
		}
		else if (res == 4){
			// Store.xml is not present
			//debug(LOG,"%s\n\r","No data to upload");
		}
		else{
			// Some problem with SDcard
			debug(LOG,"%s\n\r","Problem With SD card");
			chk[0] = 1;				// To indiacte SD is having some problem
			SDCheck();
		}
	}
	else
	if(res == FR_OK)
	{
		WDG_setTaskState(dptr , UPLOADING);
		debug(CONSOLE,"%s\n\r","send.xml present");
		// Start Timer
		timeInterval(1,START);
		res = uploadFile(&modm, "./root/send.xml", &tcp);
		sysstatus.uploadTime = timeInterval(1,END);
		chk[0] = 0;						// to indicate SD is working fine
	}
	else
	if(res == 3){
		debug(LOG,"%s\n\r","SD card not present");
	}
	else{
		debug(LOG,"%s\n\r","Some problem With SDCard");
		chk[0] = 1;						// To indicate SD is having some problem
		SDCheck();
	}
	// Modem Work is over; Release it
	mdmUnLock(&modm);

	debug(LOG,"UPLOAD:UploadTime taken: %d min\n\r",sysstatus.uploadTime);

	WDG_setTaskState(dptr , MODEM_FREE);
	// If file is uploaded successfully
	if(res == mdmOK)
	{
		// Appending send.xml data to alldata.xml
		debug(CONSOLE,"%s\n\r","Open read send.xml");
		res = f_open(&send, "./root/send.xml", FA_READ );
		if (res) die(res);
		f_sync(&send);

		debug(CONSOLE,"%s\n\r","Write alldata.xml");
		res = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ);//| FA_CREATE_ALWAYS);
		if (res) die(res);
		f_sync(&alldata);

		if( res == FR_NO_FILE)
		{
			debug(CONSOLE,"%s\n\r","Creating alldata.xml");
			res = f_open(&alldata, "./root/alldata.xml", FA_WRITE|FA_READ| FA_CREATE_ALWAYS);
			if (res) die(res);
			f_sync(&alldata);
		}

		// If the alldata.xml has already some data present
		if(!(f_size(&alldata) == 0))
		{
			debug(CONSOLE,"%s\n\r","append alldata.xml");
			// Overwriting the Endtag
			res = f_lseek(&alldata, f_size(&alldata)- strlen(ENDTAG)-1);
			// Read after the head tag
			res = f_read(&send, lclbuff, strlen(STARTTAG)+2, &br);
			if (res || !br) die(res);
			//for(res = 0; res < br;res++)
			//printf(" %c",lclbuff[res]);
			res = f_write(&alldata, "\t", 1,&bw);
			if (res) die(res);
			f_sync(&alldata);
		}
		//If nothing is present in the file
		else{
			debug(CONSOLE,"%s\n\r","alldata.xml empty");
			res = f_write(&alldata, STARTTAG, strlen(STARTTAG), &bw);
			if (res) die(res);
			f_sync(&alldata);
		}
			debug(LOG,"%s\n\r","copying content");
		// Start copying content from send.xml to alldata.xml
		CoEnterMutexSection(file_mutex);
		do {
			WDG_setTaskState(dptr , APPEND);
			res = f_read(&send, lclbuff, sizeof(lclbuff), &br);	/* Read a chunk of file */
			if (res || !br) break;								/* Error or end of file */
			res = f_write(&alldata, lclbuff, br, &bw);
			if (res) break;
			f_sync(&alldata);
		}
		while(f_eof(&send)!= 1);
		CoLeaveMutexSection(file_mutex);

		res = f_close(&send);
		if (res) die(res);

		res = f_close(&alldata);
		if (res) die(res);

		debug(CONSOLE,"%s\n\r","Deleting send.xml\n\r");
		f_unlink("./root/send.xml");		// Delete the file

	}
	else
	{
		if(res == 4)
		{
			debug(LOG,"%s\n\r","UPLOAD:No Data to Upload");
		}
		else{
			debug(LOG,"%s\n\r","Uploading Failed..");
			sysstatus.uploadFail++;
		}
	}
	WDG_setTaskState(dptr , WAIT);
}
