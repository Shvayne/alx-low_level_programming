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
	int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
