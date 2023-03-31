#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - prints the number of elements in a list
 * @h: pointer to head of list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
