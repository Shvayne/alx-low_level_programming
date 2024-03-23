#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dlistint - print elements of a dlistint_h struct
 * @h: head node
 * Return: the number of elements counted
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    while(h != 0)
    {
        count++;
        printf("%d\n", h->n);
        h = h->next;
    }
    return (count);
}