#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * string_help - Prints a string for variadic function
 * if format character is s
 * @ap: Variable argument pointer
 */
void string_help(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Prints different format specifier
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, flag = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				string_help(args);
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if (flag == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
