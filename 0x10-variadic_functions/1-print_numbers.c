#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print int
 * @separator: constant seperator
 * @n: number of parameters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num = va_arg(args, unsigned int);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", num);
	if ((separator != NULL) && i != (n - 1))
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
