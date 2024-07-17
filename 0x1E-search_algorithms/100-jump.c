#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - An implementation of the jump search algorithm
 * @array: pointer to the first element to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the found value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size); /* Calculate the jump step*/
	size_t prev = 0;
	size_t i; /* Loop variable for linear search */

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	/* Jump through the array in steps */
	while (prev < size && array[prev] < value)
	{
		/* Print the current index being checked */
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev += step; /* Move to the next jump block */
	}
	/*print indexes being searched*/
	printf("Value found between index [%lu] and [%lu]\n", prev - step, prev);

	/*perform linear search within block*/
	for (i = prev - step; i < size && i <= prev; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
