#include "main.h"
#include <stddef.h>
/**
 * _strstr - string function
 * Return: null or haystack
 * @haystack: pointer to the sting to be
 * searched
 * @needle: pointer to sring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
