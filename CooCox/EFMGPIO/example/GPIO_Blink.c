#include <stdint.h>
#include <stdbool.h>
#include "efm32.h"
#include "efm32_chip.h"
#include "efm32_gpio.h"

/***************************************************************************//**
 * Global variables
 ******************************************************************************/
volatile uint32_t msTicks; /* counts 1ms timeTicks */

/***************************************************************************//**
 * Declare function prototype
 ******************************************************************************/
void SysTick_Handler(void);
void Delay( uint32_t);

/***************************************************************************//**
 * @brief      Blink LED example
 ******************************************************************************/
void GPIO_Blink(void)
{
    int count = 0;
    /* Chip errata */
    CHIP_Init();

    /* Ensure core frequency has been updated */
    SystemCoreClockUpdate();
    /* Setup SysTick Timer for 1 msec interrupts  */
    if (SysTick_Config(SystemCoreClock / 1000))
        while (1);

    /* Config GPIO for the use of LED */
    CMU->HFPERCLKEN0 |= CMU_HFPERCLKEN0_GPIO;
    GPIO_PinModeSet(gpioPortC, 0, gpioModePushPull, 0);
    GPIO_PinModeSet(gpioPortC, 1, gpioModePushPull, 0);
    GPIO_PinModeSet(gpioPortC, 2, gpioModePushPull, 0);
    GPIO_PinModeSet(gpioPortC, 3, gpioModePushPull, 0);

    /* Infinite loop to blink the LED*/
    while (1)
    {
        GPIO_PortOutSetVal(gpioPortC, count, 0xf);
        count++;
        Delay(1000);
    }
}

/***************************************************************************//**
 * @brief SysTick_Handler
 * Interrupt Service Routine for system tick counter
 ******************************************************************************/
void SysTick_Handler(void)
{
    msTicks++; /* increment counter necessary in Delay()*/
}

/***************************************************************************//**
 * @brief Delays number of msTick Systicks (typically 1 ms)
 * @param dlyTicks Number of ticks to delay
 ******************************************************************************/
void Delay(uint32_t dlyTicks)
{
    uint32_t curTicks;

    curTicks = msTicks;
    while ((msTicks - curTicks) < dlyTicks);
}