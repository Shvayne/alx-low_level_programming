#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print int
 * @seperator: constant seperator
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = va_arg(args, unsigned int);
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
		printf("%d", sum);
	while (separator)
	{
		if (i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
