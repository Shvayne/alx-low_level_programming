# Project 0x1A Hash Tables

## Overview
Welcome to Project 0x1A Hash Tables! This project is an implementation of hash tables in the C programming language. Hash tables are a fundamental data structure that offers efficient key-value storage and retrieval, making them widely used in various applications such as database indexing, caches, and symbol tables.

## Features
- **Key-Value Storage**: Store data in the form of key-value pairs, allowing fast retrieval based on keys.
- **Collision Handling**: Implement collision resolution techniques to handle cases where two different keys hash to the same index.
- **Dynamic Sizing**: Dynamically resize the hash table to maintain efficiency as the number of stored elements changes.
- **Efficient Lookup**: Achieve constant-time average case lookup for operations such as insertion, deletion, and retrieval.

## Usage
To use this hash table implementation, follow these steps:

1. **Include the Header File**: Include the `hash_tables.h` header file in your C program.
2. **Initialize a Hash Table**: Use the `hash_table_create` function to create a new hash table.
3. **Insert Key-Value Pairs**: Insert key-value pairs into the hash table using the `hash_table_set` function.
4. **Retrieve Values**: Retrieve values associated with keys using the `hash_table_get` function.
5. **Delete Entries**: Remove key-value pairs from the hash table using the `hash_table_delete` function.
6. **Free Resources**: Don't forget to free the memory allocated for the hash table when it's no longer needed using the `hash_table_delete` function.

Example:

```c
#include "hash_tables.h"
#include <stdio.h>

int main(void) {
    hash_table_t *ht = hash_table_create(1024);

    hash_table_set(ht, "key1", "value1");
    hash_table_set(ht, "key2", "value2");

    printf("Value associated with key1: %s\n", hash_table_get(ht, "key1"));
    printf("Value associated with key2: %s\n", hash_table_get(ht, "key2"));

    hash_table_delete(ht);
    return 0;
}
```
