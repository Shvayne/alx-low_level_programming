#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - calls the function pointed to by f
 * @name: array of string, called in main
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	/* calls the function pointed by f with 1 argument */
	if (f != NULL || name != NULL)
	(*f)(name);
}
/**
 * print_name_helper - prints the string pointed
 * @name: pointer to string to be printed
 */
void print_name_helper(char *name)
{
	printf("%s\n", name);
}
