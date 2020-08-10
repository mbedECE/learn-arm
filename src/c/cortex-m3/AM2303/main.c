#include "main.h"

uint16_t temperatue = 0;
uint16_t humidity = 0;

uint32_t prescaler = 106;
uint32_t timerValue = 0xFFFF;
	 
int main(void)
{
	initialize();	
	
	while(1)
	{
	
	}
}

void TIM2_Handler(void)
{
	if(getUIF(TIM2) == true)
	{
				
		clearUIF(TIM2);
	}
}

void EXTI0_Handler(void)
{
	if(getEXTI_PR(GPIO_PIN0))
	{
		if((getPinState(PORTA, GPIO_PIN6) == true))
		{
		
		}
		else
		{
		
		}	
	
		setEXTI_PR(GPIO_PIN0, true);	
	}
}

void initialize()
{
	configureSystemClock();
	delays_init(SYS_CLK);
	lcdInit(SPI1, PORTA, GPIO_PIN7, GPIO_PIN5, GPIO_PIN4, GPIO_PIN3, GPIO_PIN2, GPIO_PIN1, SYS_CLK);
	
	AM2302();
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

void configureTimer2(void)
{	
	setTIMx_ARR(TIM2, timerValue);
	setTIMx_PSC(TIM2, prescaler);
	
	setDIR(TIM2, false);		//count up
	
	setUIE(TIM2, true);		//Update interrupt enabled
	
	setURS(TIM2, true);		//Only counter overflow/underflow generates an update interrupt
	setARPE(TIM2, true);		//TIMx_ARR register is buffered
}

void startTimer2(void)
{
	setUG(TIM2, true);		//Reinitialize the counter and generates an update of the registers
	enableCounter(TIM2);
}

uint32_t stopTimer2(void)
{
	uint32_t elapsed = 0;
	
	disableCounter(TIM2);
	elapsed = getTIMx_CNT(TIM2);
	
	return elapsed;
}

void readAM2302(uint16_t temperature, uint16_t humidity)
{

}  

void AM2302(void)
{
	enablePeripheralClock(RCC_APB2ENR_IOPBEN);		//enable peripheral clock for PORTB
	
	setupAM2302(OUTPUT);
	
	//configure timer 2
	configureTimer2();	
}

void setupAM2302(uint8_t direction)
{
	if(direction == INPUT)
	{
		configurePortPin(PORTB, GPIO_PIN0, CNF_MODE_INPUT_FLOAT, MODE_INPUT);
		
		setEXTIxCFG(EXTI0, 0x01);		//select the correct port the external interrupt is on i.e PORTB pin zero
		
		setEXTI_IMR(GPIO_PIN0, true);		//unmask the interrupt
		setEXTI_RTSR(GPIO_PIN0, true);	//enable rising edge detection on PORTB pin zero
		setEXTI_RTSR(GPIO_PIN0, true);	//enable falling edge detection on PORTB pin zero
		enableIRQ(6);				//enable EXTI0 interrupt
	}
	else
	{
		disableIRQ(6);				//disable EXTI0 interrupt
		configurePortPin(PORTB, GPIO_PIN0, CNF_MODE_OUTPUT_GP_PP, MODE_OUTPUT_50MHz);			
	}				
}

