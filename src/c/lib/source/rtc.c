#include "../include/rtc.h"

uint32_t *RTC_CRH = (uint32_t*)(RTC_BASE + 0x00);
uint32_t *RTC_CRL = (uint32_t*)(RTC_BASE + 0x04);
uint32_t *RTC_PRLH = (uint32_t*)(RTC_BASE + 0x08);
uint32_t *RTC_PRLL = (uint32_t*)(RTC_BASE + 0x0C);
uint32_t *RTC_DIVH = (uint32_t*)(RTC_BASE + 0x10);
uint32_t *RTC_DIVL = (uint32_t*)(RTC_BASE + 0x14);
uint32_t *RTC_CNTH = (uint32_t*)(RTC_BASE + 0x18);
uint32_t *RTC_CNTL = (uint32_t*)(RTC_BASE + 0x1C);
uint32_t *RTC_ALRH = (uint32_t*)(RTC_BASE + 0x20);
uint32_t *RTC_ALRL = (uint32_t*)(RTC_BASE + 0x24);

void setOWIE(bool state)
{
	if(state)
		*RTC_CRH |= (1 << RTC_CRH_OWIE);
	else
		*RTC_CRH &= ~(1 << RTC_CRH_OWIE);
}

void setALRIE(bool state)
{
	if(state)
		*RTC_CRH |= (1 << RTC_CRH_ALRIE);
	else
		*RTC_CRH &= ~(1 << RTC_CRH_ALRIE);
}

void setSECIE(bool state)
{
	if(state)
		*RTC_CRH |= (1 << RTC_CRH_SECIE);
	else
		*RTC_CRH &= ~(1 << RTC_CRH_SECIE);
}


bool getOWIE(void)
{
	return *RTC_CRH & (1 << RTC_CRH_OWIE);
}

bool getALRIE(void)
{
	return *RTC_CRH & (1 << RTC_CRH_ALRIE);
}

bool getSECIE(void)
{
	return *RTC_CRH & (1 << RTC_CRH_SECIE);
}


void setCNF(bool state)
{
	if(state)
		*RTC_CRL |= (1 << RTC_CRL_CNF);
	else
		*RTC_CRL &= ~(1 << RTC_CRL_CNF);
}

bool getRTOFF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_RTOFF);
}

bool getCNF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_CNF);
}

bool getRSF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_RSF);
}

bool getOWF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_OWF);
}

bool getALRF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_ALRF);
}

bool getSECF(void)
{
	return *RTC_CRL & (1 << RTC_CRL_SECF);
}

