#include "hash_tables.h"
/**
 * hash_table_set - this function adds an element to a hash
 * @ht: the hash table to add the element to
 * @key: the key to insert
 * @value: value to insert (can be empty)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
    {
        return 0;
    }
    /*a new node for the key value pair*/
    hash_node_t *new = malloc(sizeof(hash_node_t));
    if (new == NULL) /*if malloc fails*/
        return 0;

    /*copyin the key and value*/
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return 0;
    }
    new->value = strdup(value);
    if (new->value == NULL)
    {
        free(new->key);
        free(new);
        return 0;
    }
    new->next = NULL;

    /*if index is empty insert node at the beginning*/
    if (ht->array[index] == NULL)
    {
        ht->array[index] = new;
        return 1;
    }
    /*if there id a collision add to top of linked list*/
    new->next = ht->array[index];
    ht->array[index] = new;
    return 1;

}