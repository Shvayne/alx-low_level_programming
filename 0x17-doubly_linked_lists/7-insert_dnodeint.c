#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: double pointer to  head of the node
 * @idx: index to insert at
 * @n: data to add ro node
 * Return: new node or null if unsuccessful
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	int i = 0;

	if (*h == NULL || idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		while ((*h)->next != NULL)
		{
			*h = (*h)->next;
		}
		new_node->n = n;
		new_node->prev = *h;
		new_node->next = NULL;
		(*h)->next = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
