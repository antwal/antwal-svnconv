/**
  *****************************************************************************
  * @title   FLASH_Program
  * @author  CooCox
  * @date    15 Mar 2011
  * @brief   This example provides a description of how to program the STM32F10x FLASH.
  *          the result of the programming operation is stored into the MemoryProgramStatus variable.
  *          Four LEDs are toggled if the flash program has been down.
  *          This example has been tested on KEIL MCBSTM32 board, STM32F103RBT6 device.
  *******************************************************************************
  */
////// The above comment is automatically generated by CoIDE ///////////////////

#include "stm32f10x.h"
#include "stm32f10x_flash.h"
#include <stdio.h>



/* Private typedef -----------------------------------------------------------*/
typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;

/* Private define ------------------------------------------------------------*/
/* Define the STM32F10x FLASH Page Size depending on the used STM32 device */
#if defined (STM32F10X_HD) || defined (STM32F10X_HD_VL) || defined (STM32F10X_CL) || defined (STM32F10X_XL)
  #define FLASH_PAGE_SIZE    ((uint16_t)0x800)
#else
  #define FLASH_PAGE_SIZE    ((uint16_t)0x400)
#endif

#ifdef STM32F100RE
  //Our configurations are stored on the last flash page
  //start of last page is BANK1_WRITE_END_ADDR - 0x800(FLASH_PAGE_SIZE)
  #define BANK1_WRITE_END_ADDR    ((uint32_t)0x08080000) // end of last page
  #define BANK1_WRITE_START_ADDR  ((uint32_t)0x0807F800) // start of last page (uint32_t )&_sconf

#endif

#ifdef STM32F100RB
  //Our configurations are stored on the last flash page
  //start of last page is BANK1_WRITE_END_ADDR - 0x400(FLASH_PAGE_SIZE)
  #define BANK1_WRITE_START_ADDR  ((uint32_t)0x0801fc00) // start of last page (uint32_t )&_sconf
  #define BANK1_WRITE_END_ADDR    ((uint32_t)0x08020000) // end of last page
#endif

#ifdef STM32F10X_XL
  #define BANK2_WRITE_START_ADDR   ((uint32_t)0x08088000)
  #define BANK2_WRITE_END_ADDR     ((uint32_t)0x0808C000)
#endif /* STM32F10X_XL */
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
static uint32_t EraseCounter = 0x00, Address = 0x00;

static uint32_t NbrOfPage = 0x00;
volatile static FLASH_Status FLASHStatus = FLASH_COMPLETE;
volatile static TestStatus MemoryProgramStatus = PASSED;

#ifdef STM32F10X_XL
volatile TestStatus MemoryProgramStatus2 = PASSED;
#endif /* STM32F10X_XL */

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief    After Reset, the Flash memory Program/Erase Controller is locked.
  * To unlock it, the FLASH_Unlock function is used. Before programming the
  * desired addresses, an erase operation is performed using the flash erase
  * page feature. The erase procedure starts with the calculation of the number
  * of pages to be used. Then all these pages will be erased one by one by
  * calling FLASH_ErasePage function.
  * Once this operation is finished, the programming operation will be performed by
  * using the FLASH_ProgramWord function. The written data is then checked and the
  * result of the programming operation is stored into the MemoryProgramStatus variable.
  * @param  ptr to the dst , ptr to the src , number of bytes
  * @retval None
  */
void flashpage(void* dst ,void* src , uint32_t len)
{
   uint32_t *data = (uint32_t *)src;

/* Porgram FLASH Bank1 ********************************************************/
    /* Unlock the Flash Bank1 Program Erase controller */
    FLASH_UnlockBank1();

    /* Define the number of page to be erased */
    NbrOfPage = (BANK1_WRITE_END_ADDR - BANK1_WRITE_START_ADDR) / FLASH_PAGE_SIZE;

    /* Clear All pending flags */
    FLASH_ClearFlag(FLASH_FLAG_EOP | FLASH_FLAG_PGERR | FLASH_FLAG_WRPRTERR);

    /* Erase the FLASH pages */

    for(EraseCounter = 0; (EraseCounter < NbrOfPage) && (FLASHStatus == FLASH_COMPLETE); EraseCounter++)
    {
        FLASHStatus = FLASH_ErasePage(BANK1_WRITE_START_ADDR + (FLASH_PAGE_SIZE * EraseCounter));

    }

    /* Program Flash Bank1 */
    Address = dst ;
    data = (uint32_t *)src;

    while((Address < (dst + len)) && (FLASHStatus == FLASH_COMPLETE))
    {
        FLASHStatus = FLASH_ProgramWord(Address, *data++);
        Address = Address + 4;

    }

    FLASH_LockBank1();

    /* Check the correctness of written data */
    Address = dst;
    data = (uint32_t *)src;

    while((Address < (dst + len)) && (MemoryProgramStatus != FAILED))
    {
        if((*(__IO uint32_t*) Address) != *data++ )
        {
            MemoryProgramStatus = FAILED;
        }
        Address += 4;
    }

#ifdef STM32F10X_XL
/* Porgram FLASH Bank2 ********************************************************/
    /* Unlock the Flash Bank2 Program Erase controller */
    FLASH_UnlockBank2();

    /* Define the number of page to be erased */
    NbrOfPage = (BANK2_WRITE_END_ADDR - BANK2_WRITE_START_ADDR) / FLASH_PAGE_SIZE;

    /* Clear All pending flags */
    FLASH_ClearFlag(FLASH_FLAG_EOP | FLASH_FLAG_PGERR | FLASH_FLAG_WRPRTERR);

    /* Erase the FLASH pages */
    for(EraseCounter = 0; (EraseCounter < NbrOfPage) && (FLASHStatus == FLASH_COMPLETE); EraseCounter++)
    {
        FLASHStatus = FLASH_ErasePage(BANK2_WRITE_START_ADDR + (FLASH_PAGE_SIZE * EraseCounter));
    }

    /* Program Flash Bank2 */
    Address = dst;
    data = (uint32_t *)src;

    while((Address < (dst + len)) && (FLASHStatus == FLASH_COMPLETE))
    {
        FLASHStatus = FLASH_ProgramWord(Address, *data++);
        Address = Address + 4;
    }

    FLASH_LockBank2();

    /* Check the corectness of written data */
    Address = dst;
    data = (uint32_t *)src;

    while((Address < BANK2_WRITE_END_ADDR) && (MemoryProgramStatus2 != FAILED))
    {
        if((*(__IO uint32_t*) Address) != *data++)
        {
            MemoryProgramStatus2 = FAILED;
        }
        Address += 4;
    }
#endif /* STM32F10X_XL */

    if( MemoryProgramStatus == FAILED)
    {
    	printf("Flash Save Failed\n\r");
        //while(1);
    }

}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  while (1)
  {
  }
}
#endif
