#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: double pointer to head
 * @n: data to be stored
 * Return: address of the new element or NULL if unsuccessful
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		temp->prev = NULL;
		return (temp);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	temp->prev = current;
	return (temp);
}
