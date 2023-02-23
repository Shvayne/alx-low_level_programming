#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a
 * new line
 * Return: Alwys 0
 */
void print_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return;
}
