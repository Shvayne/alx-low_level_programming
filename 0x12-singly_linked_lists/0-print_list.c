#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints the element in a list
 * @h: head of list
 * Return: count of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	int i = h->len;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", i, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
