#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int half_index = n / 2;

	if (n % 2 == 0)
	{
		printf("%s\n", str + half_index);
	}
	else
	{
		printf("%s\n", str + half_index + 1);
	}
}
