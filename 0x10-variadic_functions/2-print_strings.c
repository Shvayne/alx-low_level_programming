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
	va_list args;
	unsigned int i;
	char *punc;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		punc = va_arg(args, char *);
		if (punc == NULL)
			printf("(nil)");
		else
			printf("%s", punc);
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
