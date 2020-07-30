#ifndef _EXTI_H
#define _EXTI_H

#include <stdint.h>
#include <stdbool.h> 

#define EXTI_BASE 0x40010400

#define EXTI_BIT19 19
#define EXTI_BIT18 18
#define EXTI_BIT17 17
#define EXTI_BIT16 16
#define EXTI_BIT15 15
#define EXTI_BIT14 14
#define EXTI_BIT13 13
#define EXTI_BIT12 12
#define EXTI_BIT11 11
#define EXTI_BIT10 10
#define EXTI_BIT9 9
#define EXTI_BIT8 8
#define EXTI_BIT7 7
#define EXTI_BIT6 6
#define EXTI_BIT5 5
#define EXTI_BIT4 4
#define EXTI_BIT3 3
#define EXTI_BIT2 2
#define EXTI_BIT1 1
#define EXTI_BIT0 0

void setEXTI_IMR(uint32_t, bool);
void setEXTI_EMR(uint32_t, bool);
void setEXTI_RTSR(uint32_t, bool);
void setEXTI_FTSR(uint32_t, bool);
void setEXTI_SWIER(uint32_t, bool);
void setEXTI_PR(uint32_t, bool);

bool getEXTI_IMR(uint32_t);
bool getEXTI_EMR(uint32_t);
bool getEXTI_RTSR(uint32_t);
bool getEXTI_FTSR(uint32_t);
bool getEXTI_SWIER(uint32_t);
bool getEXTI_PR(uint32_t);

#endif
