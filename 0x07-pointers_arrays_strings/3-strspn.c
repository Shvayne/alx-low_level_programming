#include "main.h"
/**
 * _strspn - checks for occurance of string
 * Return: count
 * @s: string to be searched
 * @accept: occurance string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	for (; *s; ++s)
	{
		for (p = accept; *p; ++p)
		{
			if (*p == *s)
			{
				count++;
				break;
			}
		}
	if (*p == '\0')
	{
		return (count);
	}
	}
	return (count);
}
