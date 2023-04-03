#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * pop_listint - deletes the head pointer of a node
 * @head: pointer to head pointer
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
