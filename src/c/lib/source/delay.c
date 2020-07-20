#include "../include/delay.h"

void delays_init(void)
{
	disableSystickTimer();
	setCockSource(CLK_PROCESSOR);
	disableException();
	enableSystickTimer();
}

//System clock period is 13ns base 72MHz
void wait(uint32_t base_period)
{
	setReloadValue(base_period-1);
	setCurrentValue(0);
	while(!isCountZero());
}

void delay_ms(uint32_t dly)
{
	for(uint32_t i=0; i<dly; i++)
		wait(76923);	//wait 0.999999 ms
}

void delay_us(uint32_t dly)
{
	for(uint32_t i=0; i<dly; i++)
		wait(77);	//wait 1.001 us
}

