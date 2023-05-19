#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - function to return num of elements in list
 * @h: pointer to the head of list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
