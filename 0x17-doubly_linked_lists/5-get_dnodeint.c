#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index specified
 * @head: head of list
 * @index: index to compare
 * Return: Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
