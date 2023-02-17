#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints characters from a-z
 * Return: 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
