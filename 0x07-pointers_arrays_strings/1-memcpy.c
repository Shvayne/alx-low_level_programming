#include "main.h"
/**
 * _memcpy - copy bytes from one memory
 * location to another
 * Return: destination
 * @dest: destination
 * @src: copy from
 * @n: byte count
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
