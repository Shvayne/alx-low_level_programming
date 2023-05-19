#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
