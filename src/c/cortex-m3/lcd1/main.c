#include <stdint.h>

#include "jlx12864g-086.h"

#include "flash.h"
#include "rcc.h"

#include "main.h"



int main(void)
{
	initialize();
		
	while(1);
	//200004e8
}

void initialize(void)
{
	configureSystemClock();
	lcdInit();
	
	//enablePeripheralClock(RCC_APB2ENR_IOPAEN);
	//configurePortPin(PORTA, GPIO_PIN9, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_2MHz);	
	//pinState(PORTA, GPIO_PIN9, HIGH);
	
	//temp1 = *RCC_APB2ENR;
	//temp2 = *GPIOA_CRH;
	//temp3 = *GPIOA_BSRR;
	
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

