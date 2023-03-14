#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  copies a string
 * @str: pointer to the string
 * Return: pointer to the copied strion
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(strlen(str) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
