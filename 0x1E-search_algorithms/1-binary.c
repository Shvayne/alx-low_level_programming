#include "search_algos.h"
/**
 * binary_search - An implementation of the binary search algorithm
 * @array: pointer to the first element to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the found value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i, mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	return (-1);
}
