#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds a new node behind the the head node
 * @head: head node
 * @str: pointer to string
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
