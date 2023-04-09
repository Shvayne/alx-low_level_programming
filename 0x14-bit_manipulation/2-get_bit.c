#include "main.h"
#include <stdio.h>
/**
 * get_bit - return bit at given index
 * @n: number to check
 * @index: index
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* convert n to binary */
	unsigned long int mask = 1;

	mask <<= index;
	/* check if index is within bounds */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/* get the bit value at index */
	if (n & mask)
		return (1);
	else
		return (0);
}
