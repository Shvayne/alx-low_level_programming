#include "lists.h"
/**
 * sum_dlistint - funcyion to sum data in a list
 * @head: head of list
 * Return: total sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
