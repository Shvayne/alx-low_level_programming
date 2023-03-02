#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
void print_number(int n)
{
	int divisor = 1;

	while (n / divisor >= 10)
	{
		divisor = divisor * 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar('0' + digit);
		n = n % divisor;
		divisor = divisor / 10;
	}
}
