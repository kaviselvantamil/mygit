#ifndef _STM32F4_CLK_H_
#define _STM32F4_CLK_H_

#include <stdint.h>

typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
	
}GPIO_Def;


#define GPIOA_BASE_ADDRESS 0x40020000
#define GPIOA ((GPIO_Def *)GPIOA_BASE_ADDRESS)

#define GPIOC_BASE_ADDRESS 0x40020800 
#define GPIOC ((GPIO_Def *)GPIOC_BASE_ADDRESS)

#endif