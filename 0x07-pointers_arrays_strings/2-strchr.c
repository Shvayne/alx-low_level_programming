#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for a character
 * Return: null or s;
 * @s: pointer to string
 * @c: character to be checked
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
