#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function to sum all the data in a list
 * @head: start point
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
