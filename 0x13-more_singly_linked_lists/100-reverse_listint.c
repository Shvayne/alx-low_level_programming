#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head pointer
 * Return: pointer to starting node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
