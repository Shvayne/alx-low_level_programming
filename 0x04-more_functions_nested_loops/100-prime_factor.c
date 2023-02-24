#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	long int num = 612852475143;
	int i = 2;

	while (num != 1)
	{
		if (num % i == 0)
		{
			num /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%d", i);
	return (0);
}
