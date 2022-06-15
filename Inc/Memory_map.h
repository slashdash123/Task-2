/*
 * Memory_map.h
 *
 *  Created on: Nov 1, 2021
 *      Author: domen
 */

#ifndef MEMORY_MAP_H_
#define MEMORY_MAP_H_

#define RCC_BASE										0x40023800
#define RCC_AHB1ENR									(RCC_BASE + 0x30)
#define RCC_AHB1ENR_GPIOGEN					(1 << 6)
#define RCC_AHB1ENR_GPIOAEN					(1 << 0)
#define RCC_AHB1ENR_GPIOFEN					(1 << 5)

#define GPIOA_BASE									0x40020000							// za gumb
#define GPIOA_MODER									(GPIOA_BASE + 0x00)			// z MODER nastavimo kaj bo naš GPIO (input/output...)
#define GPIOA_IDR										(GPIOA_BASE + 0x10)			// read only bits vsebujejo prebrano vrednost I7O porta

#define GPIOG_BASE									0x40021800							//zelena led PG13
#define GPIOG_MODER									(GPIOG_BASE + 0x00)
#define GPIOG_ODR										(GPIOG_BASE + 0x14)

#define GPIOF_BASE									0x40021400							// periferija za GPIOF
#define GPIOF_MODER									(GPIOF_BASE + 0x00)			// povemo kje ma GPIOF mode register
#define GPIOF_ODR										(GPIOF_BASE + 0x14)			// definiramo kje je output data register na portu F


#endif /* MEMORY_MAP_H_ */
