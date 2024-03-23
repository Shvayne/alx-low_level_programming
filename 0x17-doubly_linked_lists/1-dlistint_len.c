#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - count the number of element in a linked list
 * @h: head node
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t len = 0;

    while(h != NULL)
    {
        len++;
        h= h->next;
    }
    return (len);
}
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        printf("Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}