
/*
*********************************************************************************************************
*                                              EXAMPLE CODE
*
*                          (c) Copyright 2003-2010; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                         uC/OS-II example code
*                                       Main application function
*
*                                   Energy Micro EFM32 (EFM32G890F128)
*                                              with the
*                               Energy Micro EFM32G890F128-STK Starter Kit
*
* Filename      : app.c
* Version       : V0.2
* Programmer(s) : Energy Micro AS
* (C) Copyright 2010 Energy Micro AS, http://www.energymicro.com
*
* This source code is the property of Energy Micro AS. The source and compiled code may only be used on
* Energy Micro "EFM32" microcontrollers.
*
* This copyright notice may not be removed from the source code nor changed.
*
* DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Energy Micro AS has no obligation to support this
* Software. Energy Micro AS is providing the Software "AS IS", with no express or implied warranties of
* any kind, including, but not limited to, any implied warranties of merchantability or fitness for any
* particular purpose or warranties against infringement of any proprietary rights of a third party.
*
* Energy Micro AS will not be liable for any consequential, incidental, or special damages, or any other
* relief, or for any claim by any third party, arising from your use of this Software.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*/
#include <includes.h>


/*
*********************************************************************************************************
*                                      EXTERNAL GLOBAL VARIABLES
*********************************************************************************************************
*/

/* definition of global mailbox object for inter-task communication
 * extern declaration in includes.h */
OS_EVENT *pSerialMsgObj;


/*
*********************************************************************************************************
*                                         LOCAL GLOBAL VARIABLES
*********************************************************************************************************
*/
static OS_STK App_TaskStartStk[APP_CFG_TASK_START_STK_SIZE];
static OS_STK App_TaskOneStk[APP_CFG_TASK_ONE_STK_SIZE];
static OS_STK App_TaskTwoStk[APP_CFG_TASK_TWO_STK_SIZE];
static OS_STK App_TaskThreeStk[APP_CFG_TASK_THREE_STK_SIZE];


/*
*********************************************************************************************************
*                                      LOCAL FUNCTION PROTOTYPES
*********************************************************************************************************
*/
static void App_TaskStart (void *p_arg);
static void App_TaskCreate (void);
static void App_MailboxCreate(void);

/* static function for energyAware Profiler */
static void setupSWO(void);


/*
*********************************************************************************************************
*                                         FUNCTION DEFINITIONS
*********************************************************************************************************
*/
/*
*********************************************************************************************************
*                                                main()
*
* Description : This is the standard entry point for C code.  It is assumed that your code will call
*               main() once you have performed all necessary initialization.
*
* Argument(s) : none.
*
* Return(s)   : none.
*********************************************************************************************************
*/
int main(void)
{
#if (OS_TASK_NAME_EN > 0)
  CPU_INT08U  err;
#endif


  /* Disable all interrupts until we are ready to accept
   * them.                                                */
  CPU_IntDis();

  /* Chip errata */
  CHIP_Init();

  /* setup SW0 for energyAware Profiler */
  setupSWO();

  /* Initialize "uC/OS-II, The Real-Time Kernel".         */
  OSInit();

  /* Create the start task                                */
  OSTaskCreateExt((void (*)(void *)) App_TaskStart,
                  (void           *) 0,
                  (OS_STK         *)&App_TaskStartStk[APP_CFG_TASK_START_STK_SIZE - 1],
                  (INT8U           ) APP_CFG_TASK_START_PRIO,
                  (INT16U          ) APP_CFG_TASK_START_PRIO,
                  (OS_STK         *)&App_TaskStartStk[0],
                  (INT32U          ) APP_CFG_TASK_START_STK_SIZE,
                  (void           *) 0,
                  (INT16U          )(OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR));

#if (OS_TASK_NAME_EN > 0)
  OSTaskNameSet(APP_CFG_TASK_START_PRIO, "Start", &err);
#endif

  /* Start multitasking (i.e. give control to uC/OS-II).  */
  OSStart();

  /* OSStart() never returns, serious error had occured if
   * code execution reached this point                    */
  while(1) ;
}


/*
*********************************************************************************************************
*                                          AppTaskStart()
*
* Description : The startup task.  The uC/OS-II ticker should only be initialize once multitasking starts.
*
* Argument(s) : p_arg       Argument passed to 'AppTaskStart()' by 'OSTaskCreate()'.
*
* Return(s)   : none.
*
* Note(s)     : (1) The first line of code is used to prevent a compiler warning because 'p_arg' is not
*                   used.  The compiler should not generate any code for this statement.
*
*               (2) Interrupts are enabled once the task starts because the I-bit of the CCR register was
*                   set to 0 by 'OSTaskCreate()'.
*********************************************************************************************************
*/
static void App_TaskStart(void *p_arg)
{
  (void)p_arg; /* Note(1) */

  /* Initialize BSP functions                             */
  BSP_Init();

  /* Initialize the uC/OS-II ticker                       */
  OS_CPU_SysTickInit(CMU_ClockFreqGet(cmuClock_HFPER)/OS_TICKS_PER_SEC);

#if (OS_TASK_STAT_EN > 0)
  /* Determine CPU capacity                               */
  OSStatInit();
#endif

  /* Create application tasks                             */
  App_TaskCreate();

  /* Create application mailboxes                         */
  App_MailboxCreate();

  /* Initialize LCD                                       */
  SegmentLCD_Init(true);

  /* Turn gecko symbol ON                                 */
  SegmentLCD_Symbol(LCD_SYMBOL_GECKO, 1);

  /* Turn EFM32 symbol ON                                 */
  SegmentLCD_Symbol(LCD_SYMBOL_EFM32, 1);

  /* Write welcome message on LCD                         */
  SegmentLCD_Write("uC/OS-2");

/* As USART connectors are not available on the STK by default,
 * therefore printf() functions are turned off.
 * Uncomment the macro definition in includes.h if USART0
 * is connected to your STK board!                        */
#ifdef USART0_CONNECTED

  /* Initialize USART0                                    */
  USART0_Init();

  /* Write welcome message on serial(USART0)              */
  printf("\n*****************************************************************************");
  printf("\n                    uC/OS-II v%d.%d on Energy Micro EFM32 DVK                 ",
         OSVersion() / 100,
         OSVersion() % 100);
  printf("\n                               Demo Application                              \n");
  printf("\n                                   uC/OS-II                                  ");
  printf("\n                           \"The real time kernel\"                            ");
  printf("\n                               www.micrium.com                               ");
  printf("\n\n                                is running on                              ");
  printf("\n\n                             Energy Micro EFM32                              ");
  printf("\n            \"The world's most energy friendly microcontrollers\"              ");
  printf("\n                            www.energymicro.com                              \n");
  printf("\nDescription:");
  printf("\nTask1: LED blink task");
  printf("\nTask2: Receives characters from serial (USART0) and posts message to Task3");
  printf("\nTask3: Receives message from Task2 and writes it on LCD and serial (USART0)");
  printf("\n*****************************************************************************\n");
  printf("\nStart typing...\n");

#endif /* end of #ifndef USART0_CONNECTED */

  /* Suspend this task as it is only used once in one Reset cycle */
  OSTaskSuspend(APP_CFG_TASK_START_PRIO);

  while (1)
  {/* endless loop of Start task                          */
    ;
  }
}


/*
*********************************************************************************************************
*                                      App_MailboxCreate()
*
* Description : Create the application Mailboxes
*
* Argument(s) : none.
*
* Return(s)   : none.
*
* Note(s)     : none.
*********************************************************************************************************
*/
static void App_MailboxCreate (void)
{
  /* Create mailbox object for messaging received serial data between tasks */
  pSerialMsgObj = OSMboxCreate((void *)0);

}


/*
*********************************************************************************************************
*                                      App_TaskCreate()
*
* Description : Create the application tasks.
*
* Argument(s) : none.
*
* Return(s)   : none.
*
* Note(s)     : none.
*********************************************************************************************************
*/
static void App_TaskCreate (void)
{
#if (OS_TASK_NAME_EN > 0)
  CPU_INT08U  err;
#endif

  /* Create the One task                         */
  OSTaskCreateExt((void (*)(void *)) APP_TaskOne,
                  (void           *) 0,
                  (OS_STK         *)&App_TaskOneStk[APP_CFG_TASK_ONE_STK_SIZE - 1],
                  (INT8U           ) APP_CFG_TASK_ONE_PRIO,
                  (INT16U          ) APP_CFG_TASK_ONE_PRIO,
                  (OS_STK         *)&App_TaskOneStk[0],
                  (INT32U          ) APP_CFG_TASK_ONE_STK_SIZE,
                  (void           *) 0,
                  (INT16U          )(OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR));

  /* Create the Two task                         */
  OSTaskCreateExt((void (*)(void *)) APP_TaskTwo,
                  (void           *) 0,
                  (OS_STK         *)&App_TaskTwoStk[APP_CFG_TASK_TWO_STK_SIZE - 1],
                  (INT8U           ) APP_CFG_TASK_TWO_PRIO,
                  (INT16U          ) APP_CFG_TASK_TWO_PRIO,
                  (OS_STK         *)&App_TaskTwoStk[0],
                  (INT32U          ) APP_CFG_TASK_TWO_STK_SIZE,
                  (void           *) 0,
                  (INT16U          )(OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR));

    /* Create the Three task                     */
  OSTaskCreateExt((void (*)(void *)) APP_TaskThree,
                  (void           *) 0,
                  (OS_STK         *)&App_TaskThreeStk[APP_CFG_TASK_TWO_STK_SIZE - 1],
                  (INT8U           ) APP_CFG_TASK_THREE_PRIO,
                  (INT16U          ) APP_CFG_TASK_THREE_PRIO,
                  (OS_STK         *)&App_TaskThreeStk[0],
                  (INT32U          ) APP_CFG_TASK_THREE_STK_SIZE,
                  (void           *) 0,
                  (INT16U          )(OS_TASK_OPT_STK_CHK | OS_TASK_OPT_STK_CLR));

#if (OS_TASK_NAME_EN > 0)
  OSTaskNameSet(APP_CFG_TASK_ONE_PRIO, "One", &err);
  OSTaskNameSet(APP_CFG_TASK_TWO_PRIO, "Two", &err);
  OSTaskNameSet(APP_CFG_TASK_TWO_PRIO, "Three", &err);
#endif
}


