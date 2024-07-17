#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - An implementation of the interpolation search algorithm
 * @array: pointer to the first element to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the found value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    if (array == NULL || size == 0)
    {
        return (-1);
    }
    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (low == high)
        {
            if (array[low] == value)
            {
                return (low);
            }
            return (-1);
        }

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (pos >= size)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            return (-1);
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
        {
            return (pos);
        }
        if (array[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }
    return (-1);
}
