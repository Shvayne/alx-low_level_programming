#include "main.h"
#include <stdio.h>
/**
 * set_bit - set bit at given index to 1
 * @n: pointer to n
 * @index: index to set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/**
	 * use bitwise or operator to set the bit at index
	 * to 1 in the value pointed by n, the result is
	 * stored back in n
	 */
	*n |= (1UL << index);
	return (1);
}

