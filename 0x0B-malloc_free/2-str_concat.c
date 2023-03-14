#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concates two strings
 * @s1: first strng
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t total_len = len1 + len2 + 1;
	char *result;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	result = (char *) malloc(total_len * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, len2);
	result[total_len - 1] = '\0';
	return (result);
}
