#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: size of the table
 * Return: pointer to the hash table created
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table = malloc(sizeof(hash_table_t)); /*allocate space for table*/
    unsigned int i;/*loop variable*/

    if (table == NULL) /*if memory allocation fails*/
    {
        return (NULL);
    }
    table->size = size; /*set the table size to size*/
    table->array = calloc(table->size, sizeof(hash_node_t *));/*allocate space for each array in the table*/
    if (!table->array) /*if fail to allocate space for array*/
    {
        return (NULL);
    }
    for (i = 0; i < table->size; i++)
    {
        table->array[i] = NULL; /*loop through setting the array elements to null*/
    }
    return (table);
}