#include "main.h"
/**
 * _memset - behave like the standard memset
 * function
 * Return: s
 * @s: pointer
 * @b: value
 * @n: number of times to iterate
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
