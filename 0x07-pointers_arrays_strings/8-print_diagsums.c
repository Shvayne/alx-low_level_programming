#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the main and
 * secondary diagonals of an array
 * @a: array
 * @size: sixe of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_main = 0, sum_sec = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_main = sum_main + *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				sum_sec = sum_sec + *(a + i * size + j);
			}
		}
	}
	printf("%d\n", sum_main);
	printf("%d\n", sum_sec);
}
