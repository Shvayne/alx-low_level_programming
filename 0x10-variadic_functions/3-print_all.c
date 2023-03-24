#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * string_handle - handles string
 * @str: variable pointer
 */
void string_handle(va_list str)
{
	char *string;

	string = va_arg(str, char *);
	if (string == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}

/**
 * print_all - prints all arguments, irrespective of type and number
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	int x;
	float f;
	char *s;
	int flag = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				flag = 1;
				break;
			case 'i':
				x = va_arg(args, int);
				printf("%d", x);
				flag = 1;
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				flag = 1;
				break;
			case 's':
				string_handle(args);
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if (format[i + 1] != '\0' && flag == 1)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
