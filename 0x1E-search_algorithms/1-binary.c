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
    size_t i;

    if (array == NULL || size == 0)
    {
        return (-1);
    }
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;
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

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (0);
}