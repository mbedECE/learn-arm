#ifndef _AFIO_H
#define _AFIO_H

#include <stdint.h>
#include <stdbool.h>

#define AFIO_BASE 0x40010000

#define AFIO_EVCR_EVOE 7
#define AFIO_EVCR_PORT 4
#define AFIO_EVCR_PIN 0

#define AFIO_MAPR_SWJ_CFG 24
#define AFIO_MAPR_ADC2_ETRIGREG_REMAP 20
#define AFIO_MAPR_ADC2_ETRIGINJ_REMAP 19
#define AFIO_MAPR_ADC1_ETRIGREG_REMAP 18
#define AFIO_MAPR_ADC1_ETRIGINJ_REMAP 17
#define AFIO_MAPR_PDO1_REMAP 15
#define AFIO_MAPR_CAN_REMAP 13
#define AFIO_MAPR_TIM4_REMAP 12
#define AFIO_MAPR_TIM3_REMAP 10
#define AFIO_MAPR_TIM2_REMAP 8
#define AFIO_MAPR_TIM1_REMAP 6
#define AFIO_MAPR_USART3_REMAP 4
#define AFIO_MAPR_USART2_REMAP 3
#define AFIO_MAPR_USART1_REMAP 2
#define AFIO_MAPR_I2C1_REMAP 1
#define AFIO_MAPR_SPI_REMAP 0

#define EXTI15 15
#define EXTI14 14
#define EXTI13 13
#define EXTI12 12
#define EXTI11 11
#define EXTI10 10
#define EXTI9 9
#define EXTI8 8
#define EXTI7 7
#define EXTI6 6
#define EXTI5 5
#define EXTI4 4
#define EXTI3 3
#define EXTI2 2
#define EXTI1 1
#define EXTI0 0

uint32_t *AFIO_EVCR;
uint32_t *AFIO_MAPR;
uint32_t *AFIO_EXTICR1;
uint32_t *AFIO_EXTICR2;
uint32_t *AFIO_EXTICR3;
uint32_t *AFIO_EXTICR4;

void setEXTIxCFG(uint8_t, uint32_t);
uint8_t getEXTIxCFG(uint8_t);

void setEVOE(bool);
void setADC2_ETRGREG_REMAP(bool);
void setADC2_ETRGINJ_REMAP(bool);
void setADC1_ETRGREG_REMAP(bool);
void setADC1_ETRGINJ_REMAP(bool);
void setPDO1_REMAP(bool);
void setTIM4_REMAP(bool);
void setUSART2_REMAP(bool);
void setUSART1_REMAP(bool);
void setI2C1_REMAP(bool);
void setSPI1_REMAP(bool);

bool getEVOE(void);
bool getADC2_ETRGREG_REMAP(void);
bool getADC2_ETRGINJ_REMAP(void);
bool getADC1_ETRGREG_REMAP(void);
bool getADC1_ETRGINJ_REMAP(void);
bool getPDO1_REMAP(void);
bool getTIM4_REMAP(void);
bool getUSART2_REMAP(void);
bool getUSART1_REMAP(void);
bool getTI2C1_REMAP(void);
bool getSPI1_REMAP(void);

void setPORT(uint32_t);
void setPIN(uint32_t);
void setSWJ_CFG(uint32_t);
void setCAN_REMAP(uint32_t);
void setTIM3_REMAP(uint32_t);
void setTIM2_REMAP(uint32_t);
void setTIM1_REMAP(uint32_t);
void setUSART3_REMAP(uint32_t);

uint32_t getPORT(void);
uint32_t getPIN(void);
uint32_t getSWJ_CFG(void);
uint32_t getCAN_REMAP(void);
uint32_t getTIM3_REMAP(void);
uint32_t getTIM2_REMAP(void);
uint32_t getTIM1_REMAP(void);
uint32_t getUSART3_REMAP(void);


#endif
