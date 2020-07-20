#include "../include/systick.h"

uint32_t *SYST_CSR =(uint32_t*)0xE000E010;
uint32_t *SYST_RVR =(uint32_t*)0xE000E014;
uint32_t *SYST_CVR =(uint32_t*)0xE000E018;

bool isCountZero(void)
{
	if(*SYST_CSR & (1 << SYST_CSR_COUNTFLAG))
		return true;
	else
	 	return false;
}

void setCockSource(uint32_t src)
{
	if(src == CLK_PROCESSOR)
		*SYST_CSR |= (1 << SYST_CSR_CLKSOURCE);
	else
		*SYST_CSR &= ~(1 << SYST_CSR_CLKSOURCE);
}


void enableSystickTimer(void)
{
	*SYST_CSR |= (1 << SYST_CSR_ENABLE);
}

void disableSystickTimer(void)
{
	*SYST_CSR &= ~(1 << SYST_CSR_ENABLE);
}

void enableException(void)
{
	*SYST_CSR |= (1 << SYST_CSR_TICKINT);
}

void disableException(void)
{
	*SYST_CSR &= ~(1 << SYST_CSR_TICKINT);
}

bool isTimerEnabled(void)
{
	if(*SYST_CSR & (1 << SYST_CSR_ENABLE))
		return true;
	else
	 	return false;
}

bool isExcetionEnabled(void)
{
	if(*SYST_CSR & (1 << SYST_CSR_TICKINT))
		return true;
	else
	 	return false;
}

void setReloadValue(uint32_t rvr)
{
	*SYST_RVR =  (rvr & 0x00FFFFFF);
}

uint32_t getCurrentValue(void)
{
	return *SYST_CVR;
}

void setCurrentValue(uint32_t value)
{
	*SYST_CVR = value;
}
