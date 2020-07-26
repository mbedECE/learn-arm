#ifndef _TIMERS_H
#define _TIMERS_H

#include <stdint.h>
#include <stdbool.h>

#include "../include/rcc.h"

#define TIM1 1
#define TIM2 2
#define TIM3 3
#define TIM4 4

#define TIM1_BASE 0x40012C00
#define TIM2_BASE 0x40000000
#define TIM3_BASE 0x40000400
#define TIM4_BASE 0x40000800

#define TIMx_CR1_CKD 8
#define TIMx_CR1_ARPE 7
#define TIMx_CR1_CMS 5
#define TIMx_CR1_DIR 4
#define TIMx_CR1_OPM 3
#define TIMx_CR1_URS 2
#define TIMx_CR1_UDIS 1
#define TIMx_CR1_CEN 0

#define TIMx_CR2_OIS4 14
#define TIMx_CR2_OIS3N 13
#define TIMx_CR2_OIS3 12
#define TIMx_CR2_OIS2N 11
#define TIMx_CR2_OIS2 10
#define TIMx_CR2_OIS1N 9
#define TIMx_CR2_OIS1 8
#define TIMx_CR2_TI1S 7
#define TIMx_CR2_MMS 4
#define TIMx_CR2_CCDS 3
#define TIMx_CR2_CCUS 2
#define TIMx_CR2_CCPC 0

#define TIMx_SMCR_ETP 15
#define TIMx_SMCR_ECE 14
#define TIMx_SMCR_ETPS 12
#define TIMx_SMCR_ETF 8
#define TIMx_SMCR_MSM 7
#define TIMx_SMCR_TS 4
#define TIMx_SMCR_SMS 0

#define TIMx_DIER_TDE 14
#define TIMx_DIER_COMDE 13
#define TIMx_DIER_CC4DE 12
#define TIMx_DIER_CC3DE 11
#define TIMx_DIER_CC2DE 10
#define TIMx_DIER_CC1DE 9
#define TIMx_DIER_UDE 8
#define TIMx_DIER_BIE 7
#define TIMx_DIER_TIE 6
#define TIMx_DIER_COMIE 5
#define TIMx_DIER_CC4IE 4
#define TIMx_DIER_CC3IE 3
#define TIMx_DIER_CC2IE 2
#define TIMx_DIER_CC1IE 1
#define TIMx_DIER_UIE 0

#define TIMx_SR_CC4OF 12
#define TIMx_SR_CC3OF 11
#define TIMx_SR_CC2OF 10
#define TIMx_SR_CC1OF 9
#define TIMx_SR_BIF 7
#define TIMx_SR_TIF 6 
#define TIMx_SR_COMIF 5
#define TIMx_SR_CC4IF 4
#define TIMx_SR_CC3IF 2
#define TIMx_SR_CC1IF 1
#define TIMx_SR_UIF 0

#define TIMx_EGR_BG 7
#define TIMx_EGR_TG 6
#define TIMx_EGR_COMG 5
#define TIMx_EGR_CC4G 4
#define TIMx_EGR_CC3G 3
#define TIMx_EGR_CC2G 2
#define TIMx_EGR_CC1G 1
#define TIMx_EGR_UG 0

#define TIMx_CCMR1_OC2CE 15
#define TIMx_CCMR1_OC2M 12
#define TIMx_CCMR1_OC2PE 11
#define TIMx_CCMR1_OC2FE 10
#define TIMx_CCMR1_CC2S 8
#define TIMx_CCMR1_OC1CE 7
#define TIMx_CCMR1_OC1M 4
#define TIMx_CCMR1_OC1PE 3
#define TIMx_CCMR1_OC1FE 2
#define TIMx_CCMR1_CC1S 0

#define TIMx_CCMR1_IC4F 12
#define TIMx_CCMR1_IC4PSC 10
#define TIMx_CCMR1_IC3F 4
#define TIMx_CCMR1_IC3PSC 2

#define TIMx_CCMR2_OC4CE 15
#define TIMx_CCMR2_OC4M 12
#define TIMx_CCMR2_OC4PE 11
#define TIMx_CCMR2_OC4FE 10
#define TIMx_CCMR2_CC4S 8
#define TIMx_CCMR2_OC3CE 7
#define TIMx_CCMR2_OC3M 4
#define TIMx_CCMR2_OC3PE 3
#define TIMx_CCMR2_OC3FE 2
#define TIMx_CCMR2_CC3S 0

#define TIMx_CCMR2_IC4F 12
#define TIMx_CCMR2_IC4PSC 10
#define TIMx_CCMR2_IC3F 4
#define TIMx_CCMR2_IC3PSC 2

#define TIMx_CCER_CC4P 13
#define TIMx_CCER_CC4E 12
#define TIMx_CCER_CC3NP 11
#define TIMx_CCER_CC3NE 10
#define TIMx_CCER_CC3P 9
#define TIMx_CCER_CC3E 8
#define TIMx_CCER_CC2NP 7
#define TIMx_CCER_CC2NE 6
#define TIMx_CCER_CC2P 5
#define TIMx_CCER_CC2E 4
#define TIMx_CCER_CC1NP 3
#define TIMx_CCER_CC1NE 2
#define TIMx_CCER_CC1P 1
#define TIMx_CCER_CC1E 0

#define TIMx_BDTR_MOE 15
#define TIMx_BDTR_AOE 14
#define TIMx_BDTR_BKP 13
#define TIMx_BDTR_OSSR 12
#define TIMx_BDTR_OSSI 11
#define TIMx_BDTR_LOCK 8
#define TIMx_BDTR_DTG 0

#define TIMx_DCR_DBL 8
#define TIMx_DCR_DBA 0

uint32_t *TIM1_CR1;
uint32_t *TIM1_CR2;
uint32_t *TIM1_SMCR;
uint32_t *TIM1_DIER;
uint32_t *TIM1_SR;
uint32_t *TIM1_EGR;
uint32_t *TIM1_CCMR1;
uint32_t *TIM1_CCER;
uint32_t *TIM1_CNT;
uint32_t *TIM1_PSC;
uint32_t *TIM1_ARR;
uint32_t *TIM1_RCR;
uint32_t *TIM1_CCR1;
uint32_t *TIM1_CCR2;
uint32_t *TIM1_CCR3;
uint32_t *TIM1_CCR4;
uint32_t *TIM1_BDTR;
uint32_t *TIM1_DCR;
uint32_t *TIM1_DMAR;

uint32_t *TIM2_CR1;
uint32_t *TIM2_CR2;
uint32_t *TIM2_SMCR;
uint32_t *TIM2_DIER;
uint32_t *TIM2_SR;
uint32_t *TIM2_EGR;
uint32_t *TIM2_CCMR1;
uint32_t *TIM2_CCMR2;
uint32_t *TIM2_CCER;
uint32_t *TIM2_CNT;
uint32_t *TIM2_PSC;
uint32_t *TIM2_ARR;
uint32_t *TIM2_RCR;
uint32_t *TIM2_CCR1;
uint32_t *TIM2_CCR2;
uint32_t *TIM2_CCR3;
uint32_t *TIM2_CCR4;
uint32_t *TIM2_BDTR;
uint32_t *TIM2_DCR;
uint32_t *TIM2_DMAR;

uint32_t *TIM3_CR1;
uint32_t *TIM3_CR2;
uint32_t *TIM3_SMCR;
uint32_t *TIM3_DIER;
uint32_t *TIM3_SR;
uint32_t *TIM3_EGR;
uint32_t *TIM3_CCMR1;
uint32_t *TIM3_CCMR2;
uint32_t *TIM3_CCER;
uint32_t *TIM3_CNT;
uint32_t *TIM3_PSC;
uint32_t *TIM3_ARR;
uint32_t *TIM3_RCR;
uint32_t *TIM3_CCR1;
uint32_t *TIM3_CCR2;
uint32_t *TIM3_CCR3;
uint32_t *TIM3_CCR4;
uint32_t *TIM3_BDTR;
uint32_t *TIM3_DCR;
uint32_t *TIM3_DMAR;

uint32_t *TIM4_CR1;
uint32_t *TIM4_CR2;
uint32_t *TIM4_SMCR;
uint32_t *TIM4_DIER;
uint32_t *TIM4_SR;
uint32_t *TIM4_EGR;
uint32_t *TIM4_CCMR1;
uint32_t *TIM4_CCMR2;
uint32_t *TIM4_CCER;
uint32_t *TIM4_CNT;
uint32_t *TIM4_PSC;
uint32_t *TIM4_ARR;
uint32_t *TIM4_RCR;
uint32_t *TIM4_CCR1;
uint32_t *TIM4_CCR2;
uint32_t *TIM4_CCR3;
uint32_t *TIM4_CCR4;
uint32_t *TIM4_BDTR;
uint32_t *TIM4_DCR;
uint32_t *TIM4_DMAR;


void enableTIMxClock(uint32_t);

void enableCounter(uint32_t);
void setUDIS(uint32_t, bool);
void setURS(uint32_t, bool);
void setOPM(uint32_t, bool);
void setDIR(uint32_t, bool);
void setCMS(uint32_t, uint32_t);
void setARPE(uint32_t, bool);
void setCKD(uint32_t, uint32_t);

void disableCounter(uint32_t);
bool getUDIS(uint32_t);
bool getURS(uint32_t);
bool getOPM(uint32_t);
bool getDIR(uint32_t);
uint32_t getCMS(uint32_t);
bool getARPE(uint32_t);
uint32_t getCKD(uint32_t);

void setCCPC(uint32_t, bool);
void setCCUS(uint32_t, bool);
void setCCDS(uint32_t, bool);
void setMMS(uint32_t, uint32_t);
void setTI1S(uint32_t, bool);
void setOIS1(uint32_t, bool);
void setOIS1N(uint32_t, bool);
void setOIS2(uint32_t, bool);
void setOIS2N(uint32_t, bool);
void setOIS3(uint32_t, bool);
void setOIS3N(uint32_t, bool);
void setOIS4(uint32_t, bool);

bool getOIS4(uint32_t);
bool getOIS3N(uint32_t);
bool getOIS3(uint32_t);
bool getOIS2N(uint32_t);
bool getOIS2(uint32_t);
bool getOIS1N(uint32_t);
bool getOIS1(uint32_t);
bool getTI1S(uint32_t);
uint32_t getMMS(uint32_t);
bool getCCDS(uint32_t);
bool getCCUS(uint32_t);
bool getCCPC(uint32_t);

void setETP(uint32_t, bool);
void setECE(uint32_t, bool);
void setETPS(uint32_t, uint32_t);
void setETF(uint32_t, uint32_t);
void setMSM(uint32_t, bool);
void setTS(uint32_t, uint32_t);
void setSMS(uint32_t, uint32_t);

bool getETP(uint32_t);
bool getECE(uint32_t);
uint32_t getETPS(uint32_t);
uint32_t getETF(uint32_t);
bool getMSM(uint32_t);
uint32_t getTS(uint32_t);
uint32_t getSMS(uint32_t);

void setTDE(uint32_t, bool);
void setCOMDE(uint32_t, bool);
void setCC4DE(uint32_t, bool);
void setCC3DE(uint32_t, bool);
void setCC2DE(uint32_t, bool);
void setCC1DE(uint32_t, bool);
void setUDE(uint32_t, bool);
void setBIE(uint32_t, bool);
void setTIE(uint32_t, bool);
void setCOMIE(uint32_t, bool);
void setCC4IE(uint32_t, bool);
void setCC3IE(uint32_t, bool);
void setCC2IE(uint32_t, bool);
void setCC1IE(uint32_t, bool);
void setUIE(uint32_t, bool);

bool getTDE(uint32_t);
bool getCOMDE(uint32_t);
bool getCC4DE(uint32_t);
bool getCC3DE(uint32_t);
bool getCC2DE(uint32_t);
bool getCC1DE(uint32_t);
bool getUDE(uint32_t);
bool getBIE(uint32_t);
bool getTIE(uint32_t);
bool getCOMIE(uint32_t);
bool getCC4IE(uint32_t);
bool getCC3IE(uint32_t);
bool getCC2IE(uint32_t);
bool getCC1IE(uint32_t);
bool getUIE(uint32_t);

void setCC4OF(uint32_t, bool);
void setCC3OF(uint32_t, bool);
void setCC2OF(uint32_t, bool);
void setCC1OF(uint32_t, bool);
void setBIF(uint32_t, bool);
void setTIF(uint32_t, bool);
void setCOMIF(uint32_t, bool);
void setCC4IF(uint32_t, bool);
void setCC3IF(uint32_t, bool);
void setCC2IF(uint32_t, bool);
void setCC1IF(uint32_t, bool);
void setUIF(uint32_t, bool);

bool getCC4OF(uint32_t);
bool getCC3OF(uint32_t);
bool getCC2OF(uint32_t);
bool getCC1OF(uint32_t);
bool getBIF(uint32_t);
bool getTIF(uint32_t);
bool getCOMIF(uint32_t);
bool getCC4IF(uint32_t);
bool getCC3IF(uint32_t);
bool getCC2IF(uint32_t);
bool getCC1IF(uint32_t);
bool getUIF(uint32_t);

void setBG(uint32_t, bool);
void setTG(uint32_t, bool);
void setCOMG(uint32_t, bool);
void setCC4G(uint32_t, bool);
void setCC3G(uint32_t, bool);
void setCC2G(uint32_t, bool);
void setCC1G(uint32_t, bool);
void setUG(uint32_t, bool);

bool getBG(uint32_t);
bool getTG(uint32_t);
bool getCOMG(uint32_t);
bool getCC4G(uint32_t);
bool getCC3G(uint32_t);
bool getCC2G(uint32_t);
bool getCC1G(uint32_t);
bool getUG(uint32_t);

void setOC2CE(uint32_t, bool);
void setOC2M(uint32_t, uint32_t);
void setOC2PE(uint32_t, bool);
void setOC2FE(uint32_t, bool);
void setCC2S(uint32_t, uint32_t);
void setOC1CE(uint32_t, bool);
void setOC1M(uint32_t, uint32_t);
void setOC1PE(uint32_t, bool);
void setOC1FE(uint32_t, bool);
void setCC1S(uint32_t, uint32_t);

bool getOC2CE(uint32_t);
uint32_t getOC2M(uint32_t);
bool getOC2PE(uint32_t);
bool getOC2FE(uint32_t);
uint32_t getCC2S(uint32_t);
bool getOC1CE(uint32_t);
uint32_t getOC1M(uint32_t);
bool getOC1PE(uint32_t);
bool getOC1FE(uint32_t);
uint32_t getCCS1(uint32_t);

void setIC2F(uint32_t, uint32_t);
void setIC2PSC(uint32_t, uint32_t);
void setIC1F(uint32_t, uint32_t);
void setIC1PSC(uint32_t, uint32_t);

uint32_t getIC2F(uint32_t);
uint32_t getIC2PSC(uint32_t);
uint32_t getIC1F(uint32_t);
uint32_t getIC1OSC(uint32_t);


void setOC4CE(uint32_t, bool);
void setOC4M(uint32_t, uint32_t);
void setOC4PE(uint32_t, bool);
void setOC4FE(uint32_t, bool);
void setCC4S(uint32_t, uint32_t);
void setOC3CE(uint32_t, bool);
void setOC3M(uint32_t, uint32_t);
void setOC3PE(uint32_t, bool);
void setOC3FE(uint32_t, bool);
void setCC3S(uint32_t, uint32_t);

bool getOC4CE(uint32_t);
uint32_t getOC4M(uint32_t);
bool getOC4PE(uint32_t);
bool getOC4FE(uint32_t);
uint32_t getCC4S(uint32_t);
bool getOC3CE(uint32_t);
uint32_t getOC3M(uint32_t);
bool getOC3PE(uint32_t);
bool getOC3FE(uint32_t);
uint32_t getCCS3(uint32_t);

void setIC4F(uint32_t, uint32_t);
void setIC4PSC(uint32_t, uint32_t);
void setIC3F(uint32_t, uint32_t);
void setIC3PSC(uint32_t, uint32_t);

uint32_t getIC4F(uint32_t);
uint32_t getIC4PSC(uint32_t);
uint32_t getIC3F(uint32_t);
uint32_t getIC3OSC(uint32_t);

void setCC4P(uint32_t, bool);
void setCC4E(uint32_t, bool);
void setCC3NP(uint32_t, bool);
void setCC3NE(uint32_t, bool);
void setCC3P(uint32_t, bool);
void setCC3E(uint32_t, bool);
void setCC2NP(uint32_t, bool);
void setCC2NE(uint32_t, bool);
void setCC2P(uint32_t, bool);
void setCC2E(uint32_t, bool);
void setCC1NP(uint32_t, bool);
void setCC1NE(uint32_t, bool);
void setCC1P(uint32_t, bool);
void setCC1E(uint32_t, bool);

bool getCC4P(uint32_t);
bool getCC4E(uint32_t);
bool getCC3NP(uint32_t);
bool getCC3NE(uint32_t);
bool getCC3P(uint32_t);
bool getCC3E(uint32_t);
bool getCC2NP(uint32_t);
bool getCC2NE(uint32_t);
bool getCC2P(uint32_t);
bool getCC2E(uint32_t);
bool getCC1NP(uint32_t);
bool getCC1NE(uint32_t);
bool getCC1P(uint32_t);
bool getCC1E(uint32_t);

void setMOE(uint32_t, bool);
void setAOE(uint32_t, bool);
void setBKP(uint32_t, bool);
void setBKE(uint32_t, bool);
void setOSSR(uint32_t, bool);
void setOSSI(uint32_t, bool);
void setLOCK(uint32_t, uint32_t);
void setDTG(uint32_t, uint32_t);

bool getMOE(uint32_t);
bool getAOE(uint32_t);
bool getBKP(uint32_t);
bool getBKE(uint32_t);
bool getOSSR(uint32_t);
bool getOSSI(uint32_t);
uint32_t getLOCK(uint32_t);
uint32_t getDTG(uint32_t);

void setDLB(uint32_t, uint32_t);
void setDBA(uint32_t, uint32_t);
uint32_t getDLB(uint32_t);
uint32_t getDBA(uint32_t);

void setTIMx_CNT(uint32_t, uint32_t);
uint32_t getTIMx_CNT(uint32_t);

void setTIMx_PSC(uint32_t, uint32_t);
uint32_t getTIMx_PSC(uint32_t);

void setTIMx_ARR(uint32_t, uint32_t);
uint32_t getTIMx_ARR(uint32_t);

void setTIMx_RCR(uint32_t, uint32_t);
uint32_t getTIMx_RCR(uint32_t);

void setTIMx_CCR1(uint32_t, uint32_t);
uint32_t getTIMx_CCR1(uint32_t);

void setTIMx_CCR2(uint32_t, uint32_t);
uint32_t getTIMx_CCR2(uint32_t);

void setTIMx_CCR3(uint32_t, uint32_t);
uint32_t getTIMx_CCR3(uint32_t);

void setTIMx_CCR4(uint32_t, uint32_t);
uint32_t getTIMx_CCR4(uint32_t);

void setTIMx_DMAR(uint32_t, uint32_t);
uint32_t getTIMx_DMAR(uint32_t);

#endif
