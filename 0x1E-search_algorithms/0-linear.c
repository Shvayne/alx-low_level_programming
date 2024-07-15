#include "search_algos.h"
/**
 * linear_search - An implementation of the linear search algorithm
 * @array: pointer to the first element to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the found value
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array == NULL)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}
