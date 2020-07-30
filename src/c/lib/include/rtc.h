#ifndef _RTC_H
#define _RTC_H

#include <stdint.h>
#include <stdbool.h> 

#define RTC_BASE 0x40002800

#define RTC_CRH_OWIE 2
#define RTC_CRH_ALRIE 1
#define RTC_CRH_SECIE 0

#define RTC_CRL_RTOFF 5
#define RTC_CRL_CNF 4
#define RTC_CRL_RSF 3
#define RTC_CRL_OWF 2
#define RTC_CRL_ALRF 1
#define RTC_CRL_SECF 0

void setOWIE(bool);
void setALRIE(bool);
void setSECIE(bool);

bool getOWIE(void);
bool getALRIE(void);
bool getSECIE(void);

void setCNF(bool);

bool getRTOFF(void);
bool getCNF(void);
bool getRSF(void);
bool getOWF(void);
bool getALRF(void);
bool getSECF(void);

#endif
