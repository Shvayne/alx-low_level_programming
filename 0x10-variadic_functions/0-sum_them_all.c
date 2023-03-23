#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all parameters passed to the func
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
