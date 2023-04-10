#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks for where the computer stores the most
 * and least significant bit
 * Return: 00 for big-endian and 01 for little-endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
	/**
	 * creates a pointer c to a char and sets it to the address of the
	 * first byte of i. since c is a pointer to a char it will be derefrenced
	 * and treated as single byte
	 * the function returns the value of the first byte of i which is 00
	 * on big-endian and 01 on little-endian machines
	 */

	return ((int)*c);
}
