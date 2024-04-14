#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look for the value
 * @key: the key to look for
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    unsigned long int hash_value;
    hash_node_t *current = NULL;

    if (ht == NULL || key == NULL)
        return NULL;

    hash_value = hash_djb2((const unsigned char *)key); /*calculate the hash value using the  djb2 alorithm*/
    index = hash_value % ht->size;
    if (index >= ht->size || ht->array[index] == NULL)
    {
        return 0;
    }
    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            return current->value;
        }
        current = current->next;
    }
    return (NULL);
}