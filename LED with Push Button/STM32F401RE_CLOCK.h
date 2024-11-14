#ifndef _STM32F4_GPIO_H_
#define _STM32F4_GPIO_H_

#include <stdint.h>

typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t Reserved_1[2]; //0x18, 0x1C -> Reserved 2 buffers
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t Reserved_2[2]; //0x28, 0x2C -> Reserved 2 buffers
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t Reserved_3[2]; //0x38, 0x3C -> Reserved 2 buffers
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t Reserved_4[2]; //0x48, 0x4C -> Reserved 2 buffers
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t Reserved_5[2]; //0x58, 0x5C -> Reserved 2 buffers
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t Reserved_6[2]; //0x68, 0x6C -> Reserved 2 buffers
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t Reserved_7[2]; //0x78, 0x7C -> Reserved 2 buffers
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
	volatile uint32_t Reserved_8; //0x88 -> Reserved 1 buffer

}RCC_Def;


#define RCC_BASE_ADDRESS 0x40023800
#define RCC ((RCC_Def *)RCC_BASE_ADDRESS)

#endif