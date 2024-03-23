#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint_t list
 * @head: double pointer to head
 * @n: data to be stored
 * Return: address of the new element or NULL if unsuccessful
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp = malloc(sizeof(dlistint_t)); //create a new node
    dlistint_t *current = *head; //create a current pointer and make it start from the beginning

    if (temp == NULL) //if malloc fails
    {
        return (NULL);
    } 
    temp->n = n; 
    temp->next = NULL; //make sure temp.next is pointing at NULL
    if (*head == NULL) //if the list is empty
    {
        *head = temp; //make temp the head
        temp->prev = NULL; //make its previous pointer also NuLL
        return (temp);
    }
    while(current->next != NULL) //traversing the list
    {
        current = current->next;
    }
    current->next = temp; //when it gets to the null, make its next pointer point to the newnode, connecting them
    temp->prev = current; //make temp previous pointer point to current
    return (temp);
}
