#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		printf("%c\n", str[i]);
	}
	printf("\n");

}
