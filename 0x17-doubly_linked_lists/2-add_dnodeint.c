#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: double pointer to head
 * @n: data to be added to the node
 * Return: pointer to new added node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t));
    if (temp == NULL)
    {
        return (NULL);
    }
    temp->prev = NULL;
    temp->n = n;
    temp->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = temp;
    }
    *head = temp;
    return (temp);
}