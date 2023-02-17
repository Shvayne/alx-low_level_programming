#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints characters from a-z
 * Return: 0 (success)
 */
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
putchar('\n');
}
return (0);
}
