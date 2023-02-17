#include <stdio.h>
/**
 * main - prints all comination of three digits
 * Return: 0
 */
int main(void)
{
int n, m, t;
for (n = 48; n < 58; n++)
{
for (m = 49; n < 58; m++)
{
for (t = 50; t < 58; t++)
{
if (t > m && m > n)
{
putchar(n);
putchar(m);
putchar(t);
if (n != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
