#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * binary_to_uint - converts a binary string to its
 * base10 equivalent
 * @b: string to convert
 * Return: 0 if failed or base10 num if successful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL || (b[0] != '0' && b[0] != '1'))
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != 0)
			return (0);
		result <<= 1;
		result += b[i] - '0';
		i++;
	}
	return (result);
}
