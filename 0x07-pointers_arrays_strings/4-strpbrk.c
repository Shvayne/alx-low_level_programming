#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for a string
 * Return: s or null
 * @s: pointer to char to check
 * @accept: letter search for
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
