#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: start point
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

}
