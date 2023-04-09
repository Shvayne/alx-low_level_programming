#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets bit at index to zero
 * @n: pointer to number
 * @index: index to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/**
	 * create bit mask by shifting literal by index
	 * bits. then use bitwise not ~ operator to exchange
	 * bits in mask. lastly use AND & to clear bit at
	 * index pointed by n and store back in n
	 */
	*n &= ~(1UL << index);
	return (1);
}
