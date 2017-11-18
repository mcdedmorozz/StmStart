//*****************************************************************************
//
//! \file main.c
//! \brief main application
//! \version 1.0.0.0
//! \date $Creat_time$
//! \author $Creat_author$
//! \copy
//!
//! Copyright (c) 2014 CooCox.  All rights reserved.
//
//! \addtogroup project
//! @{
//! \addtogroup main
//! @{
//*****************************************************************************

#include "stm32f10x_gpio.h"
#include "stm32f10x_conf.h"
#include "stm32f10x_rcc.h"

void delay(long cycle);
void delay(long cycle){
	while (cycle > 0)
		cycle--;
}
int main(void)
{
	RCC->APB2ENR |= (1<<4);
	GPIOC->CRH |= (0x2<<20);
    while(1)
    {
    	GPIOC->ODR |= (1<<13);
    	delay(500000);
    	GPIOC->ODR |= ~(1<<13);
    	delay(500000);
    }
}
//! @}
//! @}
