#include <stdio.h>
/**
 * print_diagonal - prints the diagonal
 * @n: number of times to print
 */
void print_diagonal(int n)
{
if (n <= 0)
{
	putchar('\n');
}
else
{
	int i, j;
for (i = 0; i < n; i++)
{
	for (j = 0; j <= i; j++)
{
	if (j == i)
{
	putchar('\\');
}
	else if (j < i)
{
	putchar(' ');
}
	putchar('\n');
}
}
}
}
