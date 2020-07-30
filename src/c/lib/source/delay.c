#include "../include/delay.h"

uint32_t SYS_CLK = 8;

void delays_init(uint32_t clk)
{	
	SYS_CLK = clk;

	disableSystickTimer();
	setCockSource(CLK_PROCESSOR);
	disableException();
	enableSystickTimer();
}

//System clock period is 125ns base on 8MHz
void wait(uint32_t base_period)
{
	setReloadValue(base_period-1);
	setCurrentValue(0);
	while(!isCountZero());
}

void delay_ms(uint32_t dly)
{
	for(uint32_t i=0; i<dly; i++)
		wait(SYS_CLK*1000);	//wait 1 ms
}

void delay_us(uint32_t dly)
{	
	for(uint32_t i=0; i<dly; i++)
		wait(SYS_CLK);	//wait 1 us
}

