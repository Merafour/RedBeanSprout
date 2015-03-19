/* #include "experiment_stm32f1.h" */

#ifndef __EXPERIMENT_STM32F1_H
#define __EXPERIMENT_STM32F1_H

#include "stm32f10x.h"
/*====================================================================================================*/
/*====================================================================================================*/
#define LED_B   PCO(13)
#define LED_G   PCO(14)
#define LED_R   PCO(15)

#define KEY_WU  PAI(0)
#define KEY_BO  PBI(2)
/*====================================================================================================*/
/*====================================================================================================*/
void GPIO_Config( void );
void Timer_Config( void );
/*====================================================================================================*/
/*====================================================================================================*/
#endif