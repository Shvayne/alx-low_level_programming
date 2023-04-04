#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints address and value of nodes
 * @head: head pointer
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *) current, current->n);
		count++;
		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *) current->next, current->next->n);
			exit(98);
		}
		temp = current;
		current = current->next;
		if (temp == current)
			break;
	}
	return (count);
}
