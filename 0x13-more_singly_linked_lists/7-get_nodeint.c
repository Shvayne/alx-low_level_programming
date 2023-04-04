#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets a node at a particular index i
 * @head: start point
 * @index: node index
 * Return: node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
