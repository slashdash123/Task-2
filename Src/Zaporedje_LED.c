/*
 * Zaporedje_LED.c
 *
 *  Created on: Mar 15, 2022
 *      Author: domen
 */

#include <Memory_map.h>
#include <stdint.h>

uint32_t zaporedje_LED (uint32_t a)
{
	uint32_t *fODR = (uint32_t*)GPIOF_ODR;
	switch (a)
	{
			// vse ugasnjene - inverzna logika
			case 0:
				*fODR |= (1 << 0); 			// PF0= a
				*fODR |= (1 << 1); 			// PF1= b
				*fODR |= (1 << 2); 			// PF2= c
				*fODR |= (1 << 3); 			// PF3= d
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop a
			case 1:
				*fODR &= ~(1 << 0); 			// PF0= a
				break;

			// vklop ab
			case 2:
				*fODR &= ~(1 << 0);			// PF0= a
				*fODR &= ~(1 << 1);			// PF1= b
				break;

			// vklop abc
			case 3:
				*fODR &= ~(1 << 0); 			// PF0= a
				*fODR &= ~(1 << 1); 			// PF1= b
				*fODR &= ~(1 << 2); 			// PF2= c
				break;

			// vklop abcd
			case 4:
				*fODR &= ~(1 << 0); 			// PF0= a
				*fODR &= ~(1 << 1); 			// PF1= b
				*fODR &= ~(1 << 2); 			// PF2= c
				*fODR &= ~(1 << 3); 			// PF3= d
				break;

			// vklop abcde
			case 5:
				*fODR &= ~(1 << 0); 			// PF0= a
				*fODR &= ~(1 << 1); 			// PF1= b
				*fODR &= ~(1 << 2); 			// PF2= c
				*fODR &= ~(1 << 3); 			// PF3= d
				*fODR &= ~(1 << 4); 			// PF4= e
				break;

			// vklop abcdef
			case 6:
				*fODR &= ~(1 << 0); 			// PF0= a
				*fODR &= ~(1 << 1); 			// PF1= b
				*fODR &= ~(1 << 2); 			// PF2= c
				*fODR &= ~(1 << 3); 			// PF3= d
				*fODR &= ~(1 << 4); 			// PF4= e
				*fODR &= ~(1 << 5); 			// PF5= f
				break;

			// vklop abcdefg
			case 7:
				*fODR &= ~(1 << 0); 			// PF0= a
				*fODR &= ~(1 << 1); 			// PF1= b
				*fODR &= ~(1 << 2); 			// PF2= c
				*fODR &= ~(1 << 3); 			// PF3= d
				*fODR &= ~(1 << 4); 			// PF4= e
				*fODR &= ~(1 << 5); 			// PF5= f
				*fODR &= ~(1 << 6); 			// PF6= g
				break;

			// vklop abcdef
			case 8:
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop abcde
			case 9:
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop abcd
			case 10:
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop abc
			case 11:
				*fODR |= (1 << 3); 			// PF3= d
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			//vklop ab
			case 12:
				*fODR |= (1 << 2); 			// PF2= c
				*fODR |= (1 << 3); 			// PF3= d
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop a
			case 13:
				*fODR |= (1 << 1); 			// PF1= b
				*fODR |= (1 << 2); 			// PF2= c
				*fODR |= (1 << 3); 			// PF3= d
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;

			// vklop a
			case 14:
				*fODR |= (1 << 0); 			// PF6= a
				*fODR |= (1 << 1); 			// PF1= b
				*fODR |= (1 << 2); 			// PF2= c
				*fODR |= (1 << 3); 			// PF3= d
				*fODR |= (1 << 4); 			// PF4= e
				*fODR |= (1 << 5); 			// PF5= f
				*fODR |= (1 << 6); 			// PF6= g
				break;
		}
}
