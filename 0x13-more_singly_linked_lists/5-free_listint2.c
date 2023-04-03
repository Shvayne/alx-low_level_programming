#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and set head
 * to NULL
 * Return: null
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
