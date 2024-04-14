#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sums all data in a list
 * @head: pointer to head of a list
 * Return: sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
