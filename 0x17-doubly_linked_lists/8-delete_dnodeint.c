#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of doubly linked list
 * @index: index of node to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (-1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
