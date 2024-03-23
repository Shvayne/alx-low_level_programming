#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - Retrieves a node at a specified index
 * @head: pointer to head node
 * @index: index of the node to be retrived
 * Return: node or null if the node doesnt exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL || i < index)
	{
		return (NULL);
	}

	return (current);
}
