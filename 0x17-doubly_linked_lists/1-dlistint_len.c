#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - count the number of element in a linked list
 * @h: head node
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
