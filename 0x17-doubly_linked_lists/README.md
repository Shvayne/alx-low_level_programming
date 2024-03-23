# Doubly Linked List Project

This project implements a doubly linked list data structure in C. A doubly linked list is a linear data structure in which elements are linked using pointers in both forward and backward directions.

## Features

- **Insertion:** Support for inserting elements at the beginning, end, or at a specified position in the list.
- **Deletion:** Operations for deleting elements from the beginning, end, or at a specified position in the list.
- **Traversal:** Functions to traverse the list in both forward and backward directions.

## Usage

To use the doubly linked list in your project, follow these steps:

1. Clone this repository to your local machine.
2. Include the `lists.h` header file in your C source file.
3. Implement the necessary operations using the provided functions.

Here's a basic example of how to use the doubly linked list:

```c
#include <stdio.h>
#include "lists.h"

int main() {
    // Create a new doubly linked list
    DoublyLinkedList* list = createDoublyLinkedList();

    // Insert elements
    insertAtBeginning(list, 10);
    insertAtEnd(list, 20);
    insertAtEnd(list, 30);

    // Traverse forward and print elements
    printf("Forward traversal: ");
    traverseForward(list);

    // Delete an element from the end
    deleteFromEnd(list);

    // Traverse backward and print elements
    printf("\nBackward traversal: ");
    traverseBackward(list);

    // Free memory
    destroyDoublyLinkedList(list);

    return 0;
}
