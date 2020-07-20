#ifndef _SYS_TICK_H
#define _SYS_TICK_H

#include <stdint.h>
#include <stdbool.h>

#define SYST_CSR_COUNTFLAG 16
#define SYST_CSR_CLKSOURCE 2
#define SYST_CSR_TICKINT 1
#define SYST_CSR_ENABLE 0

#define CLK_PROCESSOR 1
#define CLK_EXTERNAL 0

uint32_t *SYST_CSR;
uint32_t *SYST_RVR;
uint32_t *SYST_CVR;

bool isCountZero(void);
void setCockSource(uint32_t);
void enableSystickTimer(void);
void disableSystickTimer(void);
bool isTimerEnabled(void);
void enableException(void);
void disableException(void);
bool isExcetionEnabled(void);
void setReloadValue(uint32_t);
uint32_t getCurrentValue(void);
void setCurrentValue(uint32_t);
#endif


