#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints umbers 0-9
 * apart from 0 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c != 0 && c != 4)
{
putchar(c + '0');
}
}
putchar('\n');
}
