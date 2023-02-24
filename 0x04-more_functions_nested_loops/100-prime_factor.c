#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	long int x = 612852475143;
	long int pf = 2;

	for (pf = 2; pf < x; pf++)
	{
		if ((x % pf) == 0)
			x = x / pf;
	}
	printf("%ld\n", pf);
	return (0);
}
