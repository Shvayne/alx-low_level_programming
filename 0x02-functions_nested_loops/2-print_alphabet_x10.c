#include "main.h"
/**
 * print_alphabet_x10 - print alpabet
 * 10 times with loop
 */
void print_alphabet_x10(void)
{
char a;
int i;
int printed = 0;
for (i = 1; i <= 10; i++)
{
for (a = 97; a <= 122; ++a)
{
_putchar(a);
printed = 1;
}
if (printed)
{
_putchar('\n');
}
}
return;
}
