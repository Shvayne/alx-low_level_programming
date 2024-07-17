#include <stdio.h>
#include <math.h>
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
    size_t step = sqrt(size); /* Calculate the jump step size as the square root of the array size */
    size_t prev = 0; /* Initialize the previous index to 0 */
    size_t i; /* Loop variable for linear search */

    /* Jump through the array in steps */
    while (prev < size && array[prev] < value)
    {
        /* Print the current index being checked */
        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
        prev += step; /* Move to the next jump block */
    }
    /*print indexes being searched*/
    printf("Value found between indexex [%lu] and [%lu]\n", prev - step, prev);

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

/**
 * min - helper function to find the minimum of two values
 * @a: first value
 * @b: second value
 * Return: the minimum value
 */
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
    printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
    printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
    return (0);
}
