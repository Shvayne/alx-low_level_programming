#include "hash_tables.h"

/**
 * Key_index - function to return the index of a key in a table
 * @key: the key to search for
 * @size: the size of the table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    unsigned long int index;

    hash_value = hash_djb2(key); /*calculate the hash value using the  djb2 alorithm*/
    index = hash_value % size; /*gettin a valid index within the  size*/
    return index;
}