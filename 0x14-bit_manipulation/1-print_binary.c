#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a num
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (n & mask)
		{
			printf("1");
		}
		else
			printf("0");
		mask >>= 1;
	}
}
