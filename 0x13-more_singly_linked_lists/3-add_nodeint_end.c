#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: starting address of the list
 * @n: member
 * Return: pointer to last node if sucess or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *last_node = malloc(sizeof(listint_t));

	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = last_node;
	return (last_node);
}
