#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of arrray
 * @cmp: function pointer
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		return (i);
	}
	return (-1);
}
