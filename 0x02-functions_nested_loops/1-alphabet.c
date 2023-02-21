#include "main.h"
/**
 * print_alphabet - print all alphabet in
 * lowercase
 */
void print_alphabet(void)
{
char a;
int printed = 0;
for (a = 97; a <= 122; ++a)
{
_putchar(a);
printed = 1;
}
if (printed)
{
_putchar('\n');
}
return;
}
