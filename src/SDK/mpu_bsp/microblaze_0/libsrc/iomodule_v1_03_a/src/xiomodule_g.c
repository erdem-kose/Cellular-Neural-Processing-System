
/*******************************************************************
*
* CAUTION: This file is automatically generated by libgen.
* Version: Xilinx EDK 14.5 EDK_P.58f
* DO NOT EDIT.
*
* Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.

* 
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xiomodule.h"



/*
* The configuration table for devices
*/

XIOModule_Config XIOModule_ConfigTable[] =
{
	{
		XPAR_IOMODULE_0_DEVICE_ID,
		XPAR_IOMODULE_0_BASEADDR,
		XPAR_IOMODULE_0_IO_BASEADDR,
		XPAR_IOMODULE_0_INTC_HAS_FAST,
		XPAR_IOMODULE_0_INTC_BASE_VECTORS,
		((XPAR_IOMODULE_0_INTC_LEVEL_EDGE << 16) | 0x7FF),
		XIN_SVC_SGL_ISR_OPTION,
		XPAR_IOMODULE_0_FREQ,
		XPAR_IOMODULE_0_UART_BAUDRATE,
		{
			XPAR_IOMODULE_0_USE_PIT1,
			XPAR_IOMODULE_0_USE_PIT2,
			XPAR_IOMODULE_0_USE_PIT3,
			XPAR_IOMODULE_0_USE_PIT4,
		},
		{
			XPAR_IOMODULE_0_PIT1_SIZE,
			XPAR_IOMODULE_0_PIT2_SIZE,
			XPAR_IOMODULE_0_PIT3_SIZE,
			XPAR_IOMODULE_0_PIT4_SIZE,
		},
		{
			XPAR_IOMODULE_0_PIT1_PRESCALER,
			XPAR_IOMODULE_0_PIT2_PRESCALER,
			XPAR_IOMODULE_0_PIT3_PRESCALER,
			XPAR_IOMODULE_0_PIT4_PRESCALER,
		},
		{
			XPAR_IOMODULE_0_PIT1_READABLE,
			XPAR_IOMODULE_0_PIT2_READABLE,
			XPAR_IOMODULE_0_PIT3_READABLE,
			XPAR_IOMODULE_0_PIT4_READABLE,
		},
		{
			XPAR_IOMODULE_0_GPO1_INIT,
			XPAR_IOMODULE_0_GPO2_INIT,
			XPAR_IOMODULE_0_GPO3_INIT,
			XPAR_IOMODULE_0_GPO4_INIT,
		},
		{
		}

	}
};

