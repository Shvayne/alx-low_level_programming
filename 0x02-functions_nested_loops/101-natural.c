#include <stdio.h>
/**
 * main - entry point for program
 * Return: 0 for sucesss
 */
int main(void)
{
int i, sum = 0;
for (int i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
