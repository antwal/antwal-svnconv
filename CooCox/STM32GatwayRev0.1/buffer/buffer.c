/*! \file buffer.c \brief Multipurpose byte buffer structure and methods. */
//*****************************************************************************
//
// File Name	: 'buffer.c'
// Title		: Multipurpose byte buffer structure and methods
// Author		: Pascal Stang - Copyright (C) 2001-2002
// Created		: 9/23/2001
// Revised		: 9/23/2001
// Version		: 1.0
// Target MCU	: any
// Editor Tabs	: 4
//
// This code is distributed under the GNU Public License
//		which can be found at http://www.gnu.org/licenses/gpl.txt
//
//*****************************************************************************

#include "buffer.h"
#include "debug.h"
#include "main.h"
#include "modem.h"

extern	cBuffer modem_buffer;								// Receive Buffer for modem

//#ifdef PC
void dummy(){}
//#endif

//#ifdef PC

#define CRITICAL_SECTION_START dummy()
#define CRITICAL_SECTION_END dummy()
//#endif

#ifndef CRITICAL_SECTION_START
#define CRITICAL_SECTION_START	unsigned char _sreg = SREG; cli()
#define CRITICAL_SECTION_END	SREG = _sreg
#endif

// global variables

// initialization

void bufferInit(cBuffer* buffer, unsigned char *start, unsigned short size)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// set start pointer of the buffer
	buffer->dataptr = start;
	buffer->size = size;
	// initialize index and length
	buffer->dataindex = 0;
	buffer->datalength = 0;
	// end critical section
	CRITICAL_SECTION_END;
}

// access routines
unsigned char  bufferGetFromFront(cBuffer* buffer)
{
	unsigned char data = 0;
	// begin critical section
	CRITICAL_SECTION_START;
	// check to see if there's data in the buffer
	if(buffer->datalength)
	{
		// get the first character from buffer
		data = buffer->dataptr[buffer->dataindex];
		// move index down and decrement length
		buffer->dataindex++;
		if(buffer->dataindex >= buffer->size)
		{
			buffer->dataindex -= buffer->size;
		}
		buffer->datalength--;
	}
	// end critical section
	CRITICAL_SECTION_END;
	// return
	return data;
}

// Reads data from buffer but does not affects the data index
unsigned char  bufferReadFromFront(cBuffer* buffer)
{
	unsigned char data = 0;
	// begin critical section
	CRITICAL_SECTION_START;
	// check to see if there's data in the buffer
	if(buffer->datalength)
	{
		// get the first character from buffer
		data = buffer->dataptr[buffer->dataindex];
		// move index down and decrement length
		buffer->dataindex++;
		if(buffer->dataindex >= buffer->size)
		{
			buffer->dataindex -= buffer->size;
		}
//		buffer->datalength--;
	}
	// end critical section
	CRITICAL_SECTION_END;
	// return
	return data;
}

void bufferDumpFromFront(cBuffer* buffer, unsigned short numbytes)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// dump numbytes from the front of the buffer
	// are we dumping less than the entire buffer?
	if(numbytes < buffer->datalength)
	{
		// move index down by numbytes and decrement length by numbytes
		buffer->dataindex += numbytes;
		if(buffer->dataindex >= buffer->size)
		{
			buffer->dataindex -= buffer->size;
		}
		buffer->datalength -= numbytes;
	}
	else
	{
		// flush the whole buffer
		buffer->datalength = 0;
	}
	// end critical section
	CRITICAL_SECTION_END;
}

unsigned char bufferGetAtIndex(cBuffer* buffer, unsigned short index)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// return character at index in buffer
	unsigned char data = buffer->dataptr[(buffer->dataindex+index)%(buffer->size)];
	// end critical section
	CRITICAL_SECTION_END;
	return data;
}

unsigned char bufferAddToEnd(cBuffer* buffer, unsigned char data)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// make sure the buffer has room
	if(buffer->datalength < buffer->size)
	{
		// save data byte at end of buffer
		buffer->dataptr[(buffer->dataindex + buffer->datalength) % buffer->size] = data;
		// increment the length
		buffer->datalength++;
		// end critical section
		CRITICAL_SECTION_END;
		// return success
		return SUCCESS;
	}
	// end critical section
	CRITICAL_SECTION_END;
	// return failure
	return FAIL;
}

unsigned short bufferIsNotFull(cBuffer* buffer)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// check to see if the buffer has room
	// return true if there is room
	unsigned short bytesleft = (buffer->size - buffer->datalength);

	// end critical section
	CRITICAL_SECTION_END;
	if(bytesleft)
	return SUCCESS;
	else{

		return FAIL;
	}
}

uint16_t bufferDataAvail(cBuffer* buffer)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// returns the number of bytes available to read; if nothing is present returns 0
	//if(buffer->datalength > 10)
	//dbg_printf("len=%d\t",buffer->datalength);

	if(buffer == &modem_buffer)
	{
		if((buffer->datalength) < (MaxRx - 100))
		{
			modm.pio->Out(modm.sw_rts, 1);			// Making it Low
		}
	}

	return (buffer-> datalength);
	// end critical section
	CRITICAL_SECTION_END;
}


void bufferFlush(cBuffer* buffer)
{
	// begin critical section
	CRITICAL_SECTION_START;
	// flush contents of the buffer
	buffer->datalength = 0;
	buffer->dataindex = 0;
	// end critical section
	CRITICAL_SECTION_END;
}

