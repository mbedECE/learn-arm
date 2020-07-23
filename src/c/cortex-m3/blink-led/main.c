#include <stdint.h>

#include "flash.h"
#include "rcc.h"
#include "delay.h"
#include "gpio.h"

#include "main.h"

int main(void)
{
	initialize();
		
	while(1)
	{
		delay_ms(175);
		
		toggle(PORTA, GPIO_PIN8);
	}
}

void initialize(void)
{
	configureSystemClock();
	delays_init(SYS_CLK);
		
	enablePeripheralClock(RCC_APB2ENR_IOPAEN);					//enable GPIOA clock
	configurePortPin(PORTA, GPIO_PIN8, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_2MHz);	//configure PORTA
	pinState(PORTA, GPIO_PIN8, LOW);						//set pin state to logic high
}

void configureSystemClock(void)
{	
	//Enable HSI
	enableHSI();
	
	//Set HSE ON 
	enableHSE();
	
	setPLLMULL(RCC_CFGR_PLLMULx9);
	setUSBPRE(USB_PLL_DIVx1);
	setPLLSRC();
	setAPB1_PSC(RCC_CFGR_HCLK_DIVx2);	
	
	//Wait for HSE ready
	while(!isHSERDY());
	
	//Turn on PLL
	enablePLL();
		
	//Wait for PLL ready
	while(!isPLLRDY());
	
	//Set flash wait states to 2
	setPRFTB(FLASH_PRFTB_ENABLE);
	setWaitStates(FLASH_WAIT_STATES_TWO);
	
	//Switch system clock to PLL
	setSW(RCC_CFGR_SW_PLL);
	
	//Wait for switch to PLL
	while(getSWS() != RCC_CFGR_SW_PLL);
	
	//Turn off HSI to save power
	disableHSI();
}	









