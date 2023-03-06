#include "main.h"
#include <stdio.h>
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
	char *dest_startpoint = dest;
	char *src_startpoint = src;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest_startpoint);
}
