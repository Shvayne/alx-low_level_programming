#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program takes a value and prints the value
 * n - holds the value of the number entered
 * Return: 0 (sucess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
