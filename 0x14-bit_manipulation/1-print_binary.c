#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a num
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int printing = 0;
	unsigned long int mask = 1;
	mask <<= (sizeof(unsigned long int) * 8) - 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			printing = 1;
		}
		else if (printing)
			_putchar('0');
		mask >>= 1;
	}
	if (!printing)
	{
		_putchar('0');
	}
}
