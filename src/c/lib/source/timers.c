#include "../include/timers.h"

uint32_t *TIM1_CR1 = (uint32_t*)(TIM1_BASE + 0x00);
uint32_t *TIM1_CR2 = (uint32_t*)(TIM1_BASE + 0x04);
uint32_t *TIM1_SMCR = (uint32_t*)(TIM1_BASE + 0x08);
uint32_t *TIM1_DIER = (uint32_t*)(TIM1_BASE + 0x0C);
uint32_t *TIM1_SR = (uint32_t*)(TIM1_BASE + 0x10);
uint32_t *TIM1_EGR = (uint32_t*)(TIM1_BASE + 0x14);
uint32_t *TIM1_CCMR1 = (uint32_t*)(TIM1_BASE + 0x18);
uint32_t *TIM1_CCMR2 = (uint32_t*)(TIM1_BASE + 0x1C);
uint32_t *TIM1_CCER = (uint32_t*)(TIM1_BASE + 0x20);
uint32_t *TIM1_CNT = (uint32_t*)(TIM1_BASE + 0x24);
uint32_t *TIM1_PSC = (uint32_t*)(TIM1_BASE + 0x28);
uint32_t *TIM1_ARR = (uint32_t*)(TIM1_BASE + 0x2C);
uint32_t *TIM1_RCR = (uint32_t*)(TIM1_BASE + 0x30);
uint32_t *TIM1_CCR1 = (uint32_t*)(TIM1_BASE + 0x34);
uint32_t *TIM1_CCR2 = (uint32_t*)(TIM1_BASE + 0x38);
uint32_t *TIM1_CCR3 = (uint32_t*)(TIM1_BASE + 0x3C);
uint32_t *TIM1_CCR4 = (uint32_t*)(TIM1_BASE + 0x40);
uint32_t *TIM1_BDTR = (uint32_t*)(TIM1_BASE + 0x44);
uint32_t *TIM1_DCR = (uint32_t*)(TIM1_BASE + 0x48);
uint32_t *TIM1_DMAR = (uint32_t*)(TIM1_BASE + 0x4C);

uint32_t *TIM2_CR1 = (uint32_t*)(TIM2_BASE + 0x00);
uint32_t *TIM2_CR2 = (uint32_t*)(TIM2_BASE + 0x04);
uint32_t *TIM2_SMCR = (uint32_t*)(TIM2_BASE + 0x08);
uint32_t *TIM2_DIER = (uint32_t*)(TIM2_BASE + 0x0C);
uint32_t *TIM2_SR = (uint32_t*)(TIM2_BASE + 0x10);
uint32_t *TIM2_EGR = (uint32_t*)(TIM2_BASE + 0x14);
uint32_t *TIM2_CCMR1 = (uint32_t*)(TIM2_BASE + 0x18);
uint32_t *TIM2_CCMR2 = (uint32_t*)(TIM2_BASE + 0x1C);
uint32_t *TIM2_CCER = (uint32_t*)(TIM2_BASE + 0x20);
uint32_t *TIM2_CNT = (uint32_t*)(TIM2_BASE + 0x24);
uint32_t *TIM2_PSC = (uint32_t*)(TIM2_BASE + 0x28);
uint32_t *TIM2_ARR = (uint32_t*)(TIM2_BASE + 0x2C);
uint32_t *TIM2_RCR = (uint32_t*)(TIM2_BASE + 0x30);
uint32_t *TIM2_CCR1 = (uint32_t*)(TIM2_BASE + 0x34);
uint32_t *TIM2_CCR2 = (uint32_t*)(TIM2_BASE + 0x38);
uint32_t *TIM2_CCR3 = (uint32_t*)(TIM2_BASE + 0x3C);
uint32_t *TIM2_CCR4 = (uint32_t*)(TIM2_BASE + 0x40);
uint32_t *TIM2_BDTR = (uint32_t*)(TIM2_BASE + 0x44);
uint32_t *TIM2_DCR = (uint32_t*)(TIM2_BASE + 0x48);
uint32_t *TIM2_DMAR = (uint32_t*)(TIM2_BASE + 0x4C);

uint32_t *TIM3_CR1 = (uint32_t*)(TIM3_BASE + 0x00);
uint32_t *TIM3_CR2 = (uint32_t*)(TIM3_BASE + 0x04);
uint32_t *TIM3_SMCR = (uint32_t*)(TIM3_BASE + 0x08);
uint32_t *TIM3_DIER = (uint32_t*)(TIM3_BASE + 0x0C);
uint32_t *TIM3_SR = (uint32_t*)(TIM3_BASE + 0x10);
uint32_t *TIM3_EGR = (uint32_t*)(TIM3_BASE + 0x14);
uint32_t *TIM3_CCMR1 = (uint32_t*)(TIM3_BASE + 0x18);
uint32_t *TIM3_CCMR2 = (uint32_t*)(TIM3_BASE + 0x1C);
uint32_t *TIM3_CCER = (uint32_t*)(TIM3_BASE + 0x20);
uint32_t *TIM3_CNT = (uint32_t*)(TIM3_BASE + 0x24);
uint32_t *TIM3_PSC = (uint32_t*)(TIM3_BASE + 0x28);
uint32_t *TIM3_ARR = (uint32_t*)(TIM3_BASE + 0x2C);
uint32_t *TIM3_RCR = (uint32_t*)(TIM3_BASE + 0x30);
uint32_t *TIM3_CCR1 = (uint32_t*)(TIM3_BASE + 0x34);
uint32_t *TIM3_CCR2 = (uint32_t*)(TIM3_BASE + 0x38);
uint32_t *TIM3_CCR3 = (uint32_t*)(TIM3_BASE + 0x3C);
uint32_t *TIM3_CCR4 = (uint32_t*)(TIM3_BASE + 0x40);
uint32_t *TIM3_BDTR = (uint32_t*)(TIM3_BASE + 0x44);
uint32_t *TIM3_DCR = (uint32_t*)(TIM3_BASE + 0x48);
uint32_t *TIM3_DMAR = (uint32_t*)(TIM3_BASE + 0x4C);

uint32_t *TIM4_CR1 = (uint32_t*)(TIM4_BASE + 0x00);
uint32_t *TIM4_CR2 = (uint32_t*)(TIM4_BASE + 0x04);
uint32_t *TIM4_SMCR = (uint32_t*)(TIM4_BASE + 0x08);
uint32_t *TIM4_DIER = (uint32_t*)(TIM4_BASE + 0x0C);
uint32_t *TIM4_SR = (uint32_t*)(TIM4_BASE + 0x10);
uint32_t *TIM4_EGR = (uint32_t*)(TIM4_BASE + 0x14);
uint32_t *TIM4_CCMR1 = (uint32_t*)(TIM4_BASE + 0x18);
uint32_t *TIM4_CCMR2 = (uint32_t*)(TIM4_BASE + 0x1C);
uint32_t *TIM4_CCER = (uint32_t*)(TIM4_BASE + 0x20);
uint32_t *TIM4_CNT = (uint32_t*)(TIM4_BASE + 0x24);
uint32_t *TIM4_PSC = (uint32_t*)(TIM4_BASE + 0x28);
uint32_t *TIM4_ARR = (uint32_t*)(TIM4_BASE + 0x2C);
uint32_t *TIM4_RCR = (uint32_t*)(TIM4_BASE + 0x30);
uint32_t *TIM4_CCR1 = (uint32_t*)(TIM4_BASE + 0x34);
uint32_t *TIM4_CCR2 = (uint32_t*)(TIM4_BASE + 0x38);
uint32_t *TIM4_CCR3 = (uint32_t*)(TIM4_BASE + 0x3C);
uint32_t *TIM4_CCR4 = (uint32_t*)(TIM4_BASE + 0x40);
uint32_t *TIM4_BDTR = (uint32_t*)(TIM4_BASE + 0x44);
uint32_t *TIM4_DCR = (uint32_t*)(TIM4_BASE + 0x48);
uint32_t *TIM4_DMAR = (uint32_t*)(TIM4_BASE + 0x4C);


void enableTIMxClock(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			enablePeripheralClock(RCC_APB2ENR_TIM1EN);
			break;
		case TIM2:
			enablePeripheralClock(RCC_APB1ENR_TIM2EN);
			break;
		case TIM3:
			enablePeripheralClock(RCC_APB1ENR_TIM3EN);
			break;
		case TIM4:
			enablePeripheralClock(RCC_APB1ENR_TIM4EN);
			break;
	}
}

void enableCounter(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CR1 |= (1 << TIMx_CR1_CEN);
			break;
		case TIM2:
			*TIM2_CR1 |= (1 << TIMx_CR1_CEN);
		 	break;
		case TIM3:
			*TIM3_CR1 |= (1 << TIMx_CR1_CEN);
		 	break;
		case TIM4:
			*TIM4_CR1 |= (1 << TIMx_CR1_CEN);
			break; 			
	}	
}

void setUDIS(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR1 |= (1 << TIMx_CR1_UDIS);
			else
				*TIM1_CR1 &= ~(1 << TIMx_CR1_UDIS);
			break;
		case TIM2:
			if(state)
				*TIM2_CR1 |= (1 << TIMx_CR1_UDIS);
			else
				*TIM2_CR1 &= ~(1 << TIMx_CR1_UDIS);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR1 |= (1 << TIMx_CR1_UDIS);
			else
				*TIM3_CR1 &= ~(1 << TIMx_CR1_UDIS);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR1 |= (1 << TIMx_CR1_UDIS);
			else
				*TIM4_CR1 &= ~(1 << TIMx_CR1_UDIS);
			break; 			
	}
}

void setURS(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR1 |= (1 << TIMx_CR1_URS);
			else
				*TIM1_CR1 &= ~(1 << TIMx_CR1_URS);
			break;
		case TIM2:
			if(state)
				*TIM2_CR1 |= (1 << TIMx_CR1_URS);
			else
				*TIM2_CR1 &= ~(1 << TIMx_CR1_URS);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR1 |= (1 << TIMx_CR1_URS);
			else
				*TIM3_CR1 &= ~(1 << TIMx_CR1_URS);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR1 |= (1 << TIMx_CR1_URS);
			else
				*TIM4_CR1 &= ~(1 << TIMx_CR1_URS);
			break; 			
	}
}

void setOPM(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR1 |= (1 << TIMx_CR1_OPM);
			else
				*TIM1_CR1 &= ~(1 << TIMx_CR1_OPM);
			break;
		case TIM2:
			if(state)
				*TIM2_CR1 |= (1 << TIMx_CR1_OPM);
			else
				*TIM2_CR1 &= ~(1 << TIMx_CR1_OPM);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR1 |= (1 << TIMx_CR1_OPM);
			else
				*TIM3_CR1 &= ~(1 << TIMx_CR1_OPM);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR1 |= (1 << TIMx_CR1_OPM);
			else
				*TIM4_CR1 &= ~(1 << TIMx_CR1_OPM);
			break; 			
	}
}

void setDIR(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR1 |= (1 << TIMx_CR1_DIR);
			else
				*TIM1_CR1 &= ~(1 << TIMx_CR1_DIR);
			break;
		case TIM2:
			if(state)
				*TIM2_CR1 |= (1 << TIMx_CR1_DIR);
			else
				*TIM2_CR1 &= ~(1 << TIMx_CR1_DIR);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR1 |= (1 << TIMx_CR1_DIR);
			else
				*TIM3_CR1 &= ~(1 << TIMx_CR1_DIR);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR1 |= (1 << TIMx_CR1_DIR);
			else
				*TIM4_CR1 &= ~(1 << TIMx_CR1_DIR);
			break; 			
	}
}

void setCMS(uint32_t module, uint32_t cms)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CR1 |= (cms << TIMx_CR1_CMS);
			break;
		case TIM2:
			*TIM2_CR1 |= (cms << TIMx_CR1_CMS);
		 	break;
		case TIM3:
			*TIM3_CR1 |= (cms << TIMx_CR1_CMS);
		 	break;
		case TIM4:
			*TIM4_CR1 |= (cms<< TIMx_CR1_CMS);
			break; 			
	}
}

void setARPE(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR1 |= (1 << TIMx_CR1_ARPE);
			else
				*TIM1_CR1 &= ~(1 << TIMx_CR1_ARPE);
			break;
		case TIM2:
			if(state)
				*TIM2_CR1 |= (1 << TIMx_CR1_ARPE);
			else
				*TIM2_CR1 &= ~(1 << TIMx_CR1_ARPE);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR1 |= (1 << TIMx_CR1_ARPE);
			else
				*TIM3_CR1 &= ~(1 << TIMx_CR1_ARPE);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR1 |= (1 << TIMx_CR1_ARPE);
			else
				*TIM4_CR1 &= ~(1 << TIMx_CR1_ARPE);
			break; 			
	}
}

void setCKD(uint32_t module, uint32_t ckd)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CR1 |= (ckd << TIMx_CR1_CKD);
			break;
		case TIM2:
			*TIM2_CR1 |= (ckd << TIMx_CR1_CKD);
		 	break;
		case TIM3:
			*TIM3_CR1 |= (ckd << TIMx_CR1_CKD);
		 	break;
		case TIM4:
			*TIM4_CR1 |= (ckd << TIMx_CR1_CKD);
			break; 			
	}
}


void disableCounter(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CR1 &= ~(1 << TIMx_CR1_CEN);
			break;
		case TIM2:
			*TIM2_CR1 &= ~(1 << TIMx_CR1_CEN);
		 	break;
		case TIM3:
			*TIM3_CR1 &= ~(1 << TIMx_CR1_CEN);
		 	break;
		case TIM4:
			*TIM4_CR1 &= ~(1 << TIMx_CR1_CEN);
			break; 			
	}	
}

bool getUDIS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR1 & (1 << TIMx_CR1_UDIS));
			break;
		case TIM2:
			return(*TIM2_CR1 & (1 << TIMx_CR1_UDIS));
		 	break;
		case TIM3:
			return(*TIM3_CR1 & (1 << TIMx_CR1_UDIS));
		 	break;
		case TIM4:
			return(*TIM4_CR1 & (1 << TIMx_CR1_UDIS));
			break; 	
		default:
			return false;
			break;		
	}	
}

bool getURS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR1 & (1 << TIMx_CR1_URS));
			break;
		case TIM2:
			return(*TIM2_CR1 & (1 << TIMx_CR1_URS));
		 	break;
		case TIM3:
			return(*TIM3_CR1 & (1 << TIMx_CR1_URS));
		 	break;
		case TIM4:
			return(*TIM4_CR1 & (1 << TIMx_CR1_URS));
			break; 	
		default:
			return false;		
	}	
}

bool getOPM(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR1 & (1 << TIMx_CR1_OPM));
			break;
		case TIM2:
			return(*TIM2_CR1 & (1 << TIMx_CR1_OPM));
		 	break;
		case TIM3:
			return(*TIM3_CR1 & (1 << TIMx_CR1_OPM));
		 	break;
		case TIM4:
			return(*TIM4_CR1 & (1 << TIMx_CR1_OPM));
			break; 	
		default:
			return false;		
	}	
}

bool getDIR(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR1 & (1 << TIMx_CR1_DIR));
			break;
		case TIM2:
			return(*TIM2_CR1 & (1 << TIMx_CR1_DIR));
		 	break;
		case TIM3:
			return(*TIM3_CR1 & (1 << TIMx_CR1_DIR));
		 	break;
		case TIM4:
			return(*TIM4_CR1 & (1 << TIMx_CR1_DIR));
			break; 	
		default:
			return false;		
	}	
}

uint32_t getCMS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CR1 & (3 << TIMx_CR1_CMS)) >> TIMx_CR1_CMS);
			break;
		case TIM2:
			return ((*TIM2_CR1 & (3 << TIMx_CR1_CMS)) >> TIMx_CR1_CMS);
		 	break;
		case TIM3:
			return ((*TIM2_CR1 & (3 << TIMx_CR1_CMS)) >> TIMx_CR1_CMS);
		 	break;
		case TIM4:
			return ((*TIM4_CR1 & (3 << TIMx_CR1_CMS)) >> TIMx_CR1_CMS);
			break; 	
		default:
			return 0;		
	}	
}


bool getARPE(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR1 & (1 << TIMx_CR1_ARPE));
			break;
		case TIM2:
			return(*TIM2_CR1 & (1 << TIMx_CR1_ARPE));
		 	break;
		case TIM3:
			return(*TIM3_CR1 & (1 << TIMx_CR1_ARPE));
		 	break;
		case TIM4:
			return(*TIM4_CR1 & (1 << TIMx_CR1_ARPE));
			break; 
		default:
			return false;			
	}	
}


uint32_t getCKD(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CR1 & (3 << TIMx_CR1_CKD)) >> TIMx_CR1_CKD);
			break;
		case TIM2:
			return ((*TIM2_CR1 & (3 << TIMx_CR1_CKD)) >> TIMx_CR1_CKD);
		 	break;
		case TIM3:
			return ((*TIM2_CR1 & (3 << TIMx_CR1_CKD)) >> TIMx_CR1_CKD);
		 	break;
		case TIM4:
			return ((*TIM4_CR1 & (3 << TIMx_CR1_CKD)) >> TIMx_CR1_CKD);
			break; 	
		default:
			return 0;	
	}
}

void setCCPC(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_CCPC);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_CCPC);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_CCPC);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_CCPC);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_CCPC);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_CCPC);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_CCPC);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_CCPC);
			break; 			
	}
}

void setCCUS(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_CCUS);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_CCUS);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_CCUS);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_CCUS);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_CCUS);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_CCUS);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_CCUS);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_CCUS);
			break; 			
	}
}

void setCCDS(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_CCDS);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_CCDS);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_CCDS);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_CCDS);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_CCDS);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_CCDS);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_CCDS);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_CCDS);
			break; 			
	}
}

void setMMS(uint32_t module, uint32_t mms)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CR2 |= (mms << TIMx_CR2_MMS);
			break;
		case TIM2:
			*TIM2_CR2 |= (mms << TIMx_CR2_MMS);
		 	break;
		case TIM3:
			*TIM3_CR2 |= (mms << TIMx_CR2_MMS);
		 	break;
		case TIM4:
			*TIM4_CR2 |= (mms << TIMx_CR2_MMS);
			break; 			
	}
}

void setTI1S(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_TI1S);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_TI1S);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_TI1S);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_TI1S);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_TI1S);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_TI1S);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_TI1S);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_TI1S);
			break; 			
	}
}

void setOIS1(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS1);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS1);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS1);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS1);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS1);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS1);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS1);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS1);
			break; 			
	}
}

void setOIS1N(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS1N);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS1N);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS1N);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS1N);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS1N);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS1N);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS1N);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS1N);
			break; 			
	}
}

void setOIS2(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS2);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS2);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS2);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS2);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS2);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS2);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS2);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS2);
			break; 			
	}
}

void setOIS2N(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS2N);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS2N);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS2N);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS2N);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS2N);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS2N);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS2N);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS2N);
			break; 			
	}
}

void setOIS3(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS3);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS3);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS3);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS3);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS3);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS3);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS3);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS3);
			break; 			
	}
}

void setOIS3N(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS3N);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS3N);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS3N);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS3N);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS3N);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS3N);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS3N);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS3N);
			break; 			
	}
}

void setOIS4(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_CR2 |= (1 << TIMx_CR2_OIS4);
			else
				*TIM1_CR2 &= ~(1 << TIMx_CR2_OIS4);
			break;
		case TIM2:
			if(state)
				*TIM2_CR2 |= (1 << TIMx_CR2_OIS4);
			else
				*TIM2_CR2 &= ~(1 << TIMx_CR2_OIS4);
		 	break;
		case TIM3:
			if(state)
				*TIM3_CR2 |= (1 << TIMx_CR2_OIS4);
			else
				*TIM3_CR2 &= ~(1 << TIMx_CR2_OIS4);
		 	break;
		case TIM4:
			if(state)
				*TIM4_CR2 |= (1 << TIMx_CR2_OIS4);
			else
				*TIM4_CR2 &= ~(1 << TIMx_CR2_OIS4);
			break; 			
	}
}


bool getOIS4(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS4));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS4));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS4));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS4));
			break; 	
		default:
			return false;		
	}	
}

bool getOIS3N(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS3N));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS3N));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS3N));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS3N));
			break; 	
		default:
			return false;	
	}	
}


bool getOIS3(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS3));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS3));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS3));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS3));
			break; 	
		default:
			return false;		
	}	
}

bool getOIS2N(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS2N));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS2N));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS2N));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS2N));
			break; 	
		default:
			return false;		
	}	
}

bool getOIS2(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS2));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS2));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS2));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS2));
			break; 	
		default:
			return false;		
	}	
}

bool getOIS1N(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS1N));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS1N));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS1N));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS1N));
			break; 	
		default:
			return false;		
	}	
}


bool getOIS1(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_OIS1));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_OIS1));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_OIS1));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_OIS1));
			break; 
		default:
			return false;			
	}	
}

bool getTI1S(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_TI1S));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_TI1S));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_TI1S));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_TI1S));
			break; 	
		default:
			return false;		
	}	
}

uint32_t getMMS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CR2 & (7 << TIMx_CR2_MMS)) >> TIMx_CR2_MMS);
			break;
		case TIM2:
			return ((*TIM2_CR2 & (7 << TIMx_CR2_MMS)) >> TIMx_CR2_MMS);
		 	break;
		case TIM3:
			return ((*TIM2_CR2 & (7 << TIMx_CR2_MMS)) >> TIMx_CR2_MMS);
		 	break;
		case TIM4:
			return ((*TIM4_CR2 & (7 << TIMx_CR2_MMS)) >> TIMx_CR2_MMS);
			break; 	
		default:
			return 0;		
	}
}

bool getCCDS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_CCDS));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_CCDS));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_CCDS));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_CCDS));
			break; 
		default:
			return false;			
	}	
}

bool getCCUS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_CCUS));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_CCUS));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_CCUS));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_CCUS));
			break; 		
		default:
			return false;	
	}	
}

bool getCCPC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_CR2 & (1 << TIMx_CR2_CCPC));
			break;
		case TIM2:
			return(*TIM2_CR2 & (1 << TIMx_CR2_CCPC));
		 	break;
		case TIM3:
			return(*TIM3_CR2 & (1 << TIMx_CR2_CCPC));
		 	break;
		case TIM4:
			return(*TIM4_CR2 & (1 << TIMx_CR2_CCPC));
			break; 	
		default:
			return false;		
	}	
}


void setETP(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_SMCR |= (1 << TIMx_SMCR_ETP);
			else
				*TIM1_SMCR &= ~(1 << TIMx_SMCR_ETP);
			break;
		case TIM2:
			if(state)
				*TIM2_SMCR |= (1 << TIMx_SMCR_ETP);
			else
				*TIM2_SMCR &= ~(1 << TIMx_SMCR_ETP);
		 	break;
		case TIM3:
			if(state)
				*TIM3_SMCR |= (1 << TIMx_SMCR_ETP);
			else
				*TIM3_SMCR &= ~(1 << TIMx_SMCR_ETP);
		 	break;
		case TIM4:
			if(state)
				*TIM4_SMCR |= (1 << TIMx_SMCR_ETP);
			else
				*TIM4_SMCR &= ~(1 << TIMx_SMCR_ETP);
			break; 			
	}
}

void setECE(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_SMCR |= (1 << TIMx_SMCR_ECE);
			else
				*TIM1_SMCR &= ~(1 << TIMx_SMCR_ECE);
			break;
		case TIM2:
			if(state)
				*TIM2_SMCR |= (1 << TIMx_SMCR_ECE);
			else
				*TIM2_SMCR &= ~(1 << TIMx_SMCR_ECE);
		 	break;
		case TIM3:
			if(state)
				*TIM3_SMCR |= (1 << TIMx_SMCR_ECE);
			else
				*TIM3_SMCR &= ~(1 << TIMx_SMCR_ECE);
		 	break;
		case TIM4:
			if(state)
				*TIM4_SMCR |= (1 << TIMx_SMCR_ECE);
			else
				*TIM4_SMCR &= ~(1 << TIMx_SMCR_ECE);
			break; 			
	}
}

void setETPS(uint32_t module, uint32_t etps)
{
	switch(module)
	{
		case TIM1:
			*TIM1_SMCR |= (etps << TIMx_SMCR_ETPS);
			break;
		case TIM2:
			*TIM2_SMCR |= (etps << TIMx_SMCR_ETPS);
		 	break;
		case TIM3:
			*TIM3_SMCR |= (etps << TIMx_SMCR_ETPS);
		 	break;
		case TIM4:
			*TIM4_SMCR |= (etps << TIMx_SMCR_ETPS);
			break; 			
	}
}

void setETF(uint32_t module, uint32_t etf)
{
	switch(module)
	{
		case TIM1:
			*TIM1_SMCR |= (etf << TIMx_SMCR_ETF);
			break;
		case TIM2:
			*TIM2_SMCR |= (etf << TIMx_SMCR_ETF);
		 	break;
		case TIM3:
			*TIM3_SMCR |= (etf << TIMx_SMCR_ETF);
		 	break;
		case TIM4:
			*TIM4_SMCR |= (etf << TIMx_SMCR_ETF);
			break; 			
	}
}

void setMSM(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_SMCR |= (1 << TIMx_SMCR_MSM);
			else
				*TIM1_SMCR &= ~(1 << TIMx_SMCR_MSM);
			break;
		case TIM2:
			if(state)
				*TIM2_SMCR |= (1 << TIMx_SMCR_MSM);
			else
				*TIM2_SMCR &= ~(1 << TIMx_SMCR_MSM);
		 	break;
		case TIM3:
			if(state)
				*TIM3_SMCR |= (1 << TIMx_SMCR_MSM);
			else
				*TIM3_SMCR &= ~(1 << TIMx_SMCR_MSM);
		 	break;
		case TIM4:
			if(state)
				*TIM4_SMCR |= (1 << TIMx_SMCR_MSM);
			else
				*TIM4_SMCR &= ~(1 << TIMx_SMCR_MSM);
			break; 			
	}
}

void setTS(uint32_t module, uint32_t ts)
{
	switch(module)
	{
		case TIM1:
			*TIM1_SMCR |= (ts << TIMx_SMCR_TS);
			break;
		case TIM2:
			*TIM2_SMCR |= (ts << TIMx_SMCR_TS);
		 	break;
		case TIM3:
			*TIM3_SMCR |= (ts << TIMx_SMCR_TS);
		 	break;
		case TIM4:
			*TIM4_SMCR |= (ts << TIMx_SMCR_TS);
			break; 			
	}
}

void setSMS(uint32_t module, uint32_t sms)
{
	switch(module)
	{
		case TIM1:
			*TIM1_SMCR |= (sms << TIMx_SMCR_SMS);
			break;
		case TIM2:
			*TIM2_SMCR |= (sms << TIMx_SMCR_SMS);
		 	break;
		case TIM3:
			*TIM3_SMCR |= (sms << TIMx_SMCR_SMS);
		 	break;
		case TIM4:
			*TIM4_SMCR |= (sms << TIMx_SMCR_SMS);
			break; 			
	}
}


bool getETP(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_SMCR & (1 << TIMx_SMCR_ETP));
			break;
		case TIM2:
			return(*TIM2_SMCR & (1 << TIMx_SMCR_ETP));
		 	break;
		case TIM3:
			return(*TIM3_SMCR & (1 << TIMx_SMCR_ETP));
		 	break;
		case TIM4:
			return(*TIM4_SMCR & (1 << TIMx_SMCR_ETP));
			break; 
		default:
			return false;			
	}	
}

bool getECE(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_SMCR & (1 << TIMx_SMCR_ECE));
			break;
		case TIM2:
			return(*TIM2_SMCR & (1 << TIMx_SMCR_ECE));
		 	break;
		case TIM3:
			return(*TIM3_SMCR & (1 << TIMx_SMCR_ECE));
		 	break;
		case TIM4:
			return(*TIM4_SMCR & (1 << TIMx_SMCR_ECE));
			break; 	
		default:
			return false;		
	}	
}

uint32_t getETPS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_SMCR & (3 << TIMx_SMCR_ETPS)) >> TIMx_SMCR_ETPS);
			break;
		case TIM2:
			return ((*TIM2_SMCR & (3 << TIMx_SMCR_ETPS)) >> TIMx_SMCR_ETPS);
		 	break;
		case TIM3:
			return ((*TIM3_SMCR & (3 << TIMx_SMCR_ETPS)) >> TIMx_SMCR_ETPS);
		 	break;
		case TIM4:
			return ((*TIM4_SMCR & (3 << TIMx_SMCR_ETPS)) >> TIMx_SMCR_ETPS);
			break; 
		default:
			return 0;			
	}
}

uint32_t getETF(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_SMCR & (15 << TIMx_SMCR_ETF)) >> TIMx_SMCR_ETF);
			break;
		case TIM2:
			return ((*TIM2_SMCR & (15 << TIMx_SMCR_ETF)) >> TIMx_SMCR_ETF);
		 	break;
		case TIM3:
			return ((*TIM3_SMCR & (15 << TIMx_SMCR_ETF)) >> TIMx_SMCR_ETF);
		 	break;
		case TIM4:
			return ((*TIM4_SMCR & (15 << TIMx_SMCR_ETF)) >> TIMx_SMCR_ETF);
			break; 
		default:
			return 0;			
	}
}

bool getMSM(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_SMCR & (1 << TIMx_SMCR_MSM));
			break;
		case TIM2:
			return(*TIM2_SMCR & (1 << TIMx_SMCR_MSM));
		 	break;
		case TIM3:
			return(*TIM3_SMCR & (1 << TIMx_SMCR_MSM));
		 	break;
		case TIM4:
			return(*TIM4_SMCR & (1 << TIMx_SMCR_MSM));
			break; 	
		default:
			return false;		
	}	
}

uint32_t getTS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_SMCR & (7 << TIMx_SMCR_TS)) >> TIMx_SMCR_TS);
			break;
		case TIM2:
			return ((*TIM2_SMCR & (7 << TIMx_SMCR_TS)) >> TIMx_SMCR_TS);
		 	break;
		case TIM3:
			return ((*TIM3_SMCR & (7 << TIMx_SMCR_TS)) >> TIMx_SMCR_TS);
		 	break;
		case TIM4:
			return ((*TIM4_SMCR & (7 << TIMx_SMCR_TS)) >> TIMx_SMCR_TS);
			break; 
		default:
			return 0;		
	}
}

uint32_t getSMS(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_SMCR & (7 << TIMx_SMCR_SMS)) >> TIMx_SMCR_SMS);
			break;
		case TIM2:
			return ((*TIM2_SMCR & (7 << TIMx_SMCR_SMS)) >> TIMx_SMCR_SMS);
		 	break;
		case TIM3:
			return ((*TIM3_SMCR & (7 << TIMx_SMCR_SMS)) >> TIMx_SMCR_SMS);
		 	break;
		case TIM4:
			return ((*TIM4_SMCR & (7 << TIMx_SMCR_SMS)) >> TIMx_SMCR_SMS);
			break; 
		default:
			return 0;			
	}
}


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


void setOC2M(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_OC2M);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_OC2M);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_OC2M);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_OC2M);
			break; 			
	}
}

void setOC2PE(uint32_t, bool);
void setOC2FE(uint32_t, bool);


void setCC2S(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_CC2S);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_CC2S);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_CC2S);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_CC2S);
			break; 			
	}
}

void setOC1CE(uint32_t, bool);


void setOC1M(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_OC1M);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_OC1M);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_OC1M);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_OC1M);
			break; 			
	}
}

void setOC1PE(uint32_t, bool);
void setOC1FE(uint32_t, bool);


void setCC1S(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_CC1S);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_CC1S);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_CC1S);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_CC1S);
			break; 			
	}
}



bool getOC2CE(uint32_t);

uint32_t getOC2M(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (7 << TIMx_CCMR1_OC2M)) >> TIMx_CCMR1_OC2M);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (7 << TIMx_CCMR1_OC2M)) >> TIMx_CCMR1_OC2M);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (7 << TIMx_CCMR1_OC2M)) >> TIMx_CCMR1_OC2M);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (7 << TIMx_CCMR1_OC2M)) >> TIMx_CCMR1_OC2M);
			break; 
		default:
			return 0;			
	}
}

bool getOC2PE(uint32_t);
bool getOC2FE(uint32_t);

uint32_t getCC2S(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (3 << TIMx_CCMR1_CC2S)) >> TIMx_CCMR1_CC2S);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (3 << TIMx_CCMR1_CC2S)) >> TIMx_CCMR1_CC2S);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (3 << TIMx_CCMR1_CC2S)) >> TIMx_CCMR1_CC2S);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (3 << TIMx_CCMR1_CC2S)) >> TIMx_CCMR1_CC2S);
			break; 
		default:
			return 0;			
	}
}

bool getOC1CE(uint32_t);

uint32_t getOC1M(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (7 << TIMx_CCMR1_OC1M)) >> TIMx_CCMR1_OC1M);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (7 << TIMx_CCMR1_OC1M)) >> TIMx_CCMR1_OC1M);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (7 << TIMx_CCMR1_OC1M)) >> TIMx_CCMR1_OC1M);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (7 << TIMx_CCMR1_OC1M)) >> TIMx_CCMR1_OC1M);
			break; 
		default:
			return 0;			
	}
}

bool getOC1PE(uint32_t);
bool getOC1FE(uint32_t);

uint32_t getCCS1(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (3 << TIMx_CCMR1_CC1S)) >> TIMx_CCMR1_CC1S);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (3 << TIMx_CCMR1_CC1S)) >> TIMx_CCMR1_CC1S);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (3 << TIMx_CCMR1_CC1S)) >> TIMx_CCMR1_CC1S);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (3 << TIMx_CCMR1_CC1S)) >> TIMx_CCMR1_CC1S);
			break; 
		default:
			return 0;			
	}
}

void setIC2F(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_IC2F);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_IC2F);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_IC2F);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_IC2F);
			break; 			
	}
}

void setIC2PSC(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_IC2PSC);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_IC2PSC);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_IC2PSC);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_IC2PSC);
			break; 			
	}
}

void setIC1F(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_IC1F);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_IC1F);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_IC1F);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_IC1F);
			break; 			
	}
}

void setIC1PSC(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR1 |= (value << TIMx_CCMR1_IC1PSC);
			break;
		case TIM2:
			*TIM2_CCMR1 |= (value << TIMx_CCMR1_IC1PSC);
		 	break;
		case TIM3:
			*TIM3_CCMR1 |= (value << TIMx_CCMR1_IC1PSC);
		 	break;
		case TIM4:
			*TIM4_CCMR1 |= (value << TIMx_CCMR1_IC1PSC);
			break; 			
	}
}

uint32_t getIC2F(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (15 << TIMx_CCMR1_IC2F)) >> TIMx_CCMR1_IC2F);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (15 << TIMx_CCMR1_IC2F)) >> TIMx_CCMR1_IC2F);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (15 << TIMx_CCMR1_IC2F)) >> TIMx_CCMR1_IC2F);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (15 << TIMx_CCMR1_IC2F)) >> TIMx_CCMR1_IC2F);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC2PSC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (3 << TIMx_CCMR1_IC2PSC)) >> TIMx_CCMR1_IC2PSC);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (3 << TIMx_CCMR1_IC2PSC)) >> TIMx_CCMR1_IC2PSC);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (3 << TIMx_CCMR1_IC2PSC)) >> TIMx_CCMR1_IC2PSC);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (3 << TIMx_CCMR1_IC2PSC)) >> TIMx_CCMR1_IC2PSC);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC1F(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (15 << TIMx_CCMR1_IC1F)) >> TIMx_CCMR1_IC1F);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (15 << TIMx_CCMR1_IC1F)) >> TIMx_CCMR1_IC1F);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (15 << TIMx_CCMR1_IC1F)) >> TIMx_CCMR1_IC1F);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (15 << TIMx_CCMR1_IC1F)) >> TIMx_CCMR1_IC1F);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC1PSC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR1 & (3 << TIMx_CCMR1_IC1PSC)) >> TIMx_CCMR1_IC1PSC);
			break;
		case TIM2:
			return ((*TIM2_CCMR1 & (3 << TIMx_CCMR1_IC1PSC)) >> TIMx_CCMR1_IC1PSC);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR1 & (3 << TIMx_CCMR1_IC1PSC)) >> TIMx_CCMR1_IC1PSC);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR1 & (3 << TIMx_CCMR1_IC1PSC)) >> TIMx_CCMR1_IC1PSC);
			break; 
		default:
			return 0;			
	}
}

void setOC4CE(uint32_t, bool);

void setOC4M(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_OC4M);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_OC4M);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_OC4M);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_OC4M);
			break; 			
	}
}

void setOC4PE(uint32_t, bool);
void setOC4FE(uint32_t, bool);

void setCC4S(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_CC4S);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_CC4S);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_CC4S);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_CC4S);
			break; 			
	}
}

void setOC3CE(uint32_t, bool);


void setOC3M(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_OC3M);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_OC3M);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_OC3M);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_OC3M);
			break; 			
	}
}

void setOC3PE(uint32_t, bool);
void setOC3FE(uint32_t, bool);

void setCC3S(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_CC3S);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_CC3S);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_CC3S);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_CC3S);
			break; 			
	}
}

bool getOC4CE(uint32_t);


uint32_t getOC4M(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (7 << TIMx_CCMR2_OC4M)) >> TIMx_CCMR2_OC4M);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (7 << TIMx_CCMR2_OC4M)) >> TIMx_CCMR2_OC4M);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (7 << TIMx_CCMR2_OC4M)) >> TIMx_CCMR2_OC4M);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (7 << TIMx_CCMR2_OC4M)) >> TIMx_CCMR2_OC4M);
			break; 
		default:
			return 0;			
	}
}

bool getOC4PE(uint32_t);
bool getOC4FE(uint32_t);


uint32_t getCC4S(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (3 << TIMx_CCMR2_CC4S)) >> TIMx_CCMR2_CC4S);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (3 << TIMx_CCMR2_CC4S)) >> TIMx_CCMR2_CC4S);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (3 << TIMx_CCMR2_CC4S)) >> TIMx_CCMR2_CC4S);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (3 << TIMx_CCMR2_CC4S)) >> TIMx_CCMR2_CC4S);
			break; 
		default:
			return 0;			
	}
}

bool getOC3CE(uint32_t);

uint32_t getOC3M(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (7 << TIMx_CCMR2_OC3M)) >> TIMx_CCMR2_OC3M);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (7 << TIMx_CCMR2_OC3M)) >> TIMx_CCMR2_OC3M);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (7 << TIMx_CCMR2_OC3M)) >> TIMx_CCMR2_OC3M);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (7 << TIMx_CCMR2_OC3M)) >> TIMx_CCMR2_OC3M);
			break; 
		default:
			return 0;			
	}
}

bool getOC3PE(uint32_t);
bool getOC3FE(uint32_t);


uint32_t getCCS3(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (3 << TIMx_CCMR2_CC3S)) >> TIMx_CCMR2_CC3S);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (3 << TIMx_CCMR2_CC3S)) >> TIMx_CCMR2_CC3S);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (3 << TIMx_CCMR2_CC3S)) >> TIMx_CCMR2_CC3S);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (3 << TIMx_CCMR2_CC3S)) >> TIMx_CCMR2_CC3S);
			break; 
		default:
			return 0;			
	}
}


void setIC4F(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_IC4F);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_IC4F);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_IC4F);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_IC4F);
			break; 			
	}
}

void setIC4PSC(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_IC4PSC);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_IC4PSC);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_IC4PSC);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_IC4PSC);
			break; 			
	}
}

void setIC3F(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_IC3F);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_IC3F);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_IC3F);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_IC3F);
			break; 			
	}
}

void setIC3PSC(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCMR2 |= (value << TIMx_CCMR2_IC3PSC);
			break;
		case TIM2:
			*TIM2_CCMR2 |= (value << TIMx_CCMR2_IC3PSC);
		 	break;
		case TIM3:
			*TIM3_CCMR2 |= (value << TIMx_CCMR2_IC3PSC);
		 	break;
		case TIM4:
			*TIM4_CCMR2 |= (value << TIMx_CCMR2_IC3PSC);
			break; 			
	}
}

uint32_t getIC4F(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (15 << TIMx_CCMR2_IC4F)) >> TIMx_CCMR2_IC4F);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (15 << TIMx_CCMR2_IC4F)) >> TIMx_CCMR2_IC4F);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (15 << TIMx_CCMR2_IC4F)) >> TIMx_CCMR2_IC4F);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (15 << TIMx_CCMR2_IC4F)) >> TIMx_CCMR2_IC4F);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC4PSC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (3 << TIMx_CCMR2_IC4PSC)) >> TIMx_CCMR2_IC4PSC);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (3 << TIMx_CCMR2_IC4PSC)) >> TIMx_CCMR2_IC4PSC);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (3 << TIMx_CCMR2_IC4PSC)) >> TIMx_CCMR2_IC4PSC);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (3 << TIMx_CCMR2_IC4PSC)) >> TIMx_CCMR2_IC4PSC);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC3F(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (15 << TIMx_CCMR2_IC3F)) >> TIMx_CCMR2_IC3F);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (15 << TIMx_CCMR2_IC3F)) >> TIMx_CCMR2_IC3F);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (15 << TIMx_CCMR2_IC3F)) >> TIMx_CCMR2_IC3F);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (15 << TIMx_CCMR2_IC3F)) >> TIMx_CCMR2_IC3F);
			break; 
		default:
			return 0;			
	}
}

uint32_t getIC3PSC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_CCMR2 & (3 << TIMx_CCMR2_IC3PSC)) >> TIMx_CCMR2_IC3PSC);
			break;
		case TIM2:
			return ((*TIM2_CCMR2 & (3 << TIMx_CCMR2_IC3PSC)) >> TIMx_CCMR2_IC3PSC);
		 	break;
		case TIM3:
			return ((*TIM3_CCMR2 & (3 << TIMx_CCMR2_IC3PSC)) >> TIMx_CCMR2_IC3PSC);
		 	break;
		case TIM4:
			return ((*TIM4_CCMR2 & (3 << TIMx_CCMR2_IC3PSC)) >> TIMx_CCMR2_IC3PSC);
			break; 
		default:
			return 0;			
	}
}


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





void setMOE(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_MOE);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_MOE);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_MOE);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_MOE);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_MOE);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_MOE);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_MOE);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_MOE);
			break; 			
	}
}

void setAOE(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_AOE);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_AOE);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_AOE);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_AOE);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_AOE);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_AOE);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_AOE);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_AOE);
			break; 			
	}
}

void setBKP(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_BKP);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_BKP);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_BKP);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_BKP);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_BKP);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_BKP);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_BKP);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_BKP);
			break; 			
	}
}

void setBKE(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_BKE);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_BKE);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_BKE);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_BKE);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_BKE);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_BKE);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_BKE);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_BKE);
			break; 			
	}
}

void setOSSR(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_OSSR);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_OSSR);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_OSSR);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_OSSR);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_OSSR);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_OSSR);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_OSSR);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_OSSR);
			break; 			
	}
}

void setOSSI(uint32_t module, bool state)
{
	switch(module)
	{
		case TIM1:
			if(state)
				*TIM1_BDTR |= (1 << TIMx_BDTR_OSSI);
			else
				*TIM1_BDTR &= ~(1 << TIMx_BDTR_OSSI);
			break;
		case TIM2:
			if(state)
				*TIM2_BDTR |= (1 << TIMx_BDTR_OSSI);
			else
				*TIM2_BDTR &= ~(1 << TIMx_BDTR_OSSI);
		 	break;
		case TIM3:
			if(state)
				*TIM3_BDTR |= (1 << TIMx_BDTR_OSSI);
			else
				*TIM3_BDTR &= ~(1 << TIMx_BDTR_OSSI);
		 	break;
		case TIM4:
			if(state)
				*TIM4_BDTR |= (1 << TIMx_BDTR_OSSI);
			else
				*TIM4_BDTR &= ~(1 << TIMx_BDTR_OSSI);
			break; 			
	}
}

void setLOCK(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_BDTR |= (value << TIMx_BDTR_LOCK);
			break;
		case TIM2:
			*TIM2_BDTR |= (value << TIMx_BDTR_LOCK);
		 	break;
		case TIM3:
			*TIM3_BDTR |= (value << TIMx_BDTR_LOCK);
		 	break;
		case TIM4:
			*TIM4_BDTR |= (value << TIMx_BDTR_LOCK);
			break; 			
	}
}

void setDTG(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_BDTR |= (value << TIMx_BDTR_DTG);
			break;
		case TIM2:
			*TIM2_BDTR |= (value << TIMx_BDTR_DTG);
		 	break;
		case TIM3:
			*TIM3_BDTR |= (value << TIMx_BDTR_DTG);
		 	break;
		case TIM4:
			*TIM4_BDTR |= (value << TIMx_BDTR_DTG);
			break; 			
	}
}

bool getMOE(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_MOE));
			break;
		case TIM2:
			return(*TIM2_BDTR & (1 << TIMx_BDTR_MOE));
		 	break;
		case TIM3:
			return(*TIM3_BDTR & (1 << TIMx_BDTR_MOE));
		 	break;
		case TIM4:
			return(*TIM4_BDTR & (1 << TIMx_BDTR_MOE));
			break; 	
		default:
			return false;		
	}	
}

bool getAOE(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_AOE));
			break;
		case TIM2:
			return(*TIM2_BDTR & (1 << TIMx_BDTR_AOE));
		 	break;
		case TIM3:
			return(*TIM3_BDTR & (1 << TIMx_BDTR_AOE));
		 	break;
		case TIM4:
			return(*TIM4_BDTR & (1 << TIMx_BDTR_AOE));
			break; 	
		default:
			return false;		
	}	
}

bool getBKP(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_BKP));
			break;
		case TIM2:
			return(*TIM2_BDTR & (1 << TIMx_BDTR_BKP));
		 	break;
		case TIM3:
			return(*TIM3_BDTR & (1 << TIMx_BDTR_BKP));
		 	break;
		case TIM4:
			return(*TIM4_BDTR & (1 << TIMx_BDTR_BKP));
			break; 	
		default:
			return false;		
	}	
}

bool getBKE(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_BKE));
			break;
		case TIM2:
			return (*TIM2_BDTR & (1 << TIMx_BDTR_BKE));
		 	break;
		case TIM3:
			return (*TIM3_BDTR & (1 << TIMx_BDTR_BKE));
		 	break;
		case TIM4:
			return (*TIM4_BDTR & (1 << TIMx_BDTR_BKE));
			break; 	
		default:
			return false;		
	}	
}


bool getOSSR(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_OSSR));
			break;
		case TIM2:
			return(*TIM2_BDTR & (1 << TIMx_BDTR_OSSR));
		 	break;
		case TIM3:
			return(*TIM3_BDTR & (1 << TIMx_BDTR_OSSR));
		 	break;
		case TIM4:
			return(*TIM4_BDTR & (1 << TIMx_BDTR_OSSR));
			break; 	
		default:
			return false;		
	}	
}

bool getOSSI(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return (*TIM1_BDTR & (1 << TIMx_BDTR_OSSI));
			break;
		case TIM2:
			return(*TIM2_BDTR & (1 << TIMx_BDTR_OSSI));
		 	break;
		case TIM3:
			return(*TIM3_BDTR & (1 << TIMx_BDTR_OSSI));
		 	break;
		case TIM4:
			return(*TIM4_BDTR & (1 << TIMx_BDTR_OSSI));
			break; 	
		default:
			return false;		
	}	
}

uint32_t getLOCK(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_BDTR & (3 << TIMx_BDTR_LOCK)) >> TIMx_BDTR_LOCK);
			break;
		case TIM2:
			return ((*TIM2_BDTR & (3 << TIMx_BDTR_LOCK)) >> TIMx_BDTR_LOCK);
		 	break;
		case TIM3:
			return ((*TIM3_BDTR & (3 << TIMx_BDTR_LOCK)) >> TIMx_BDTR_LOCK);
		 	break;
		case TIM4:
			return ((*TIM4_BDTR & (3 << TIMx_BDTR_LOCK)) >> TIMx_BDTR_LOCK);
			break; 
		default:
			return 0;			
	}
}

uint32_t getDTG(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_BDTR & (0xFF << TIMx_BDTR_DTG)) >> TIMx_BDTR_DTG);
			break;
		case TIM2:
			return ((*TIM2_BDTR & (0xFF << TIMx_BDTR_DTG)) >> TIMx_BDTR_DTG);
		 	break;
		case TIM3:
			return ((*TIM3_BDTR & (0xFF << TIMx_BDTR_DTG)) >> TIMx_BDTR_DTG);
		 	break;
		case TIM4:
			return ((*TIM4_BDTR & (0xFF << TIMx_BDTR_DTG)) >> TIMx_BDTR_DTG);
			break; 
		default:
			return 0;			
	}
}

void setDLB(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_DCR |= (value << TIMx_DCR_DBL);
			break;
		case TIM2:
			*TIM2_DCR |= (value << TIMx_DCR_DBL);
		 	break;
		case TIM3:
			*TIM3_DCR |= (value << TIMx_DCR_DBL);
		 	break;
		case TIM4:
			*TIM4_DCR |= (value << TIMx_DCR_DBL);
			break; 			
	}
}

void setDBA(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_DCR |= (value << TIMx_DCR_DBA);
			break;
		case TIM2:
			*TIM2_DCR |= (value << TIMx_DCR_DBA);
		 	break;
		case TIM3:
			*TIM3_DCR |= (value << TIMx_DCR_DBA);
		 	break;
		case TIM4:
			*TIM4_DCR |= (value << TIMx_DCR_DBA);
			break; 			
	}
}

uint32_t getDLB(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_DCR & (0x1F << TIMx_DCR_DBL)) >> TIMx_DCR_DBL);
			break;
		case TIM2:
			return ((*TIM2_DCR & (0x1F << TIMx_DCR_DBL)) >> TIMx_DCR_DBL);
		 	break;
		case TIM3:
			return ((*TIM3_DCR & (0x1F << TIMx_DCR_DBL)) >> TIMx_DCR_DBL);
		 	break;
		case TIM4:
			return ((*TIM4_DCR & (0x1F << TIMx_DCR_DBL)) >> TIMx_DCR_DBL);
			break; 
		default:
			return 0;			
	}
}

uint32_t getDBA(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return ((*TIM1_DCR & (0x1F << TIMx_DCR_DBA)) >> TIMx_DCR_DBA);
			break;
		case TIM2:
			return ((*TIM2_DCR & (0x1F << TIMx_DCR_DBA)) >> TIMx_DCR_DBA);
		 	break;
		case TIM3:
			return ((*TIM3_DCR & (0x1F << TIMx_DCR_DBA)) >> TIMx_DCR_DBA);
		 	break;
		case TIM4:
			return ((*TIM4_DCR & (0x1F << TIMx_DCR_DBA)) >> TIMx_DCR_DBA);
			break; 
		default:
			return 0;			
	}
}

void setTIMx_CNT(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CNT = value;
			break;
			
		case TIM2:
			*TIM2_CNT = value;
			break;
			
		case TIM3:
			*TIM3_CNT = value;
			break;
			
		case TIM4:
			*TIM4_CNT = value;
			break;
	}
}

uint32_t getTIMx_CNT(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_CNT;
			break;
			
		case TIM2:
			return *TIM2_CNT;
			break;
			
		case TIM3:
			return *TIM3_CNT;
			break;
			
		case TIM4:
			return *TIM4_CNT;
			break;

		default:
			return 0;
			break;
	}
}

void setTIMx_PSC(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_PSC = value;
			break;
			
		case TIM2:
			*TIM2_ARR = value;
			break;
			
		case TIM3:
			*TIM3_ARR = value;
			break;
			
		case TIM4:
			*TIM4_ARR = value;
			break;
	}
}


uint32_t getTIMx_PSC(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_PSC;
			break;
			
		case TIM2:
			return *TIM2_PSC;
			break;
			
		case TIM3:
			return *TIM3_PSC;
			break;
			
		case TIM4:
			return *TIM4_PSC;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_ARR(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_ARR = value;
			break;
			
		case TIM2:
			*TIM2_ARR = value;
			break;
			
		case TIM3:
			*TIM3_ARR = value;
			break;
			
		case TIM4:
			*TIM4_ARR = value;
			break;
	}
}

uint32_t getTIMx_ARR(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_ARR;
			break;
			
		case TIM2:
			return *TIM2_ARR;
			break;
			
		case TIM3:
			return *TIM3_ARR;
			break;
			
		case TIM4:
			return *TIM4_ARR;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_RCR(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_RCR = value & 0x000F;
			break;
			
		case TIM2:
			*TIM2_RCR = value & 0x000F;
			break;
			
		case TIM3:
			*TIM3_RCR = value & 0x000F;
			break;
			
		case TIM4:
			*TIM4_RCR = value & 0x000F;
			break;
	}
}

uint32_t getTIMx_RCR(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_RCR;
			break;
			
		case TIM2:
			return *TIM2_RCR;
			break;
			
		case TIM3:
			return *TIM3_RCR;
			break;
			
		case TIM4:
			return *TIM4_RCR;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_CCR1(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCR1 = value;
			break;
			
		case TIM2:
			*TIM2_CCR1 = value;
			break;
			
		case TIM3:
			*TIM3_CCR1 = value;
			break;
			
		case TIM4:
			*TIM4_CCR1 = value;
			break;
	}
}

uint32_t getTIMx_CCR1(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_CCR1;
			break;
			
		case TIM2:
			return *TIM2_CCR1;
			break;
			
		case TIM3:
			return *TIM3_CCR1;
			break;
			
		case TIM4:
			return *TIM4_CCR1;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_CCR2(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCR2 = value;
			break;
			
		case TIM2:
			*TIM2_CCR2 = value;
			break;
			
		case TIM3:
			*TIM3_CCR2 = value;
			break;
			
		case TIM4:
			*TIM4_CCR2 = value;
			break;
	}
}

uint32_t getTIMx_CCR2(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_CCR2;
			break;
			
		case TIM2:
			return *TIM2_CCR2;
			break;
			
		case TIM3:
			return *TIM3_CCR2;
			break;
			
		case TIM4:
			return *TIM4_CCR2;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_CCR3(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCR3 = value;
			break;
			
		case TIM2:
			*TIM2_CCR3 = value;
			break;
			
		case TIM3:
			*TIM3_CCR3 = value;
			break;
			
		case TIM4:
			*TIM4_CCR3 = value;
			break;
	}
}

uint32_t getTIMx_CCR3(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_CCR3;
			break;
			
		case TIM2:
			return *TIM2_CCR3;
			break;
			
		case TIM3:
			return *TIM3_CCR3;
			break;
			
		case TIM4:
			return *TIM4_CCR3;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_CCR4(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_CCR4 = value;
			break;
			
		case TIM2:
			*TIM2_CCR4 = value;
			break;
			
		case TIM3:
			*TIM3_CCR4 = value;
			break;
			
		case TIM4:
			*TIM4_CCR4 = value;
			break;
	}
}

uint32_t getTIMx_CCR4(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_CCR4;
			break;
			
		case TIM2:
			return *TIM2_CCR4;
			break;
			
		case TIM3:
			return *TIM3_CCR4;
			break;
			
		case TIM4:
			return *TIM4_CCR4;
			break;
			
		default:
			return 0;
			break;
	}
}

void setTIMx_DMAR(uint32_t module, uint32_t value)
{
	switch(module)
	{
		case TIM1:
			*TIM1_DMAR = value;
			break;
			
		case TIM2:
			*TIM2_DMAR = value;
			break;
			
		case TIM3:
			*TIM3_DMAR = value;
			break;
			
		case TIM4:
			*TIM4_DMAR = value;
			break;
	}
}

uint32_t getTIMx_DMAR(uint32_t module)
{
	switch(module)
	{
		case TIM1:
			return *TIM1_DMAR;
			break;
			
		case TIM2:
			return *TIM2_DMAR;
			break;
			
		case TIM3:
			return *TIM3_DMAR;
			break;
			
		case TIM4:
			return *TIM4_DMAR;
			break;
			
		default:
			return 0;
			break;
	}
}


