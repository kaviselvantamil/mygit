#include "STM32F401RE_GPIO.h"
#include "STM32F401RE_CLOCK.h"
#include <stdio.h>

void delay(long delay)
{
	while(delay--);
}

int main()
{
	
	RCC->CR = RCC->CR | (1<<0);
	RCC->AHB1ENR = RCC->AHB1ENR | (1<<0) | (1<<2);
	
	GPIOA->MODER = GPIOA->MODER | (1<<10); //output pin
	GPIOC->MODER = GPIOC->MODER & (~(1<<26)) & (~(1<<27)); //input pin
	
	GPIOA->OTYPER = 0x0000;
	GPIOA->OSPEEDR = 0x00000000;
	
	GPIOC->OSPEEDR = 0x00000000;
	
	int input_state = 0;
	
	while(1)
		{
			input_state = (GPIOC->IDR & (1<<13))>>13;
			if(input_state == 0) //pressed
			{
				GPIOA->ODR = GPIOA->ODR | (1<<5); //Turn ON LED
			}
			else
			{
				GPIOA->ODR = GPIOA->ODR & (~(1<<5)); //Turn OFF LED
			}
		}
			
	return 0;
}