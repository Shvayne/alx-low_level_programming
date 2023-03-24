#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints an unlimited number of string parameters
 * @separator: separator string
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *comma;
	va_list yay;

	va_start(yay, n);
	for (i = 0; i < n; i++)
	{
		comma = va_arg(yay, char *);
		if (comma == NULL)
			printf("(nil)");
		else
			printf("%s", comma);
	}
	if ((separator != NULL) && (i != (n - 1)))
		printf("%s", separator);
	va_end(yay);
	printf("\n");
}
