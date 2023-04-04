#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a list and returns the address
 * @h: start point
 * Return: count or 0 if fail
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}
	*h = NULL;
	return (count);
}
