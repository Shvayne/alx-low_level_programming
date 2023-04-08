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
	unsigned int len;
	int i;

	if (b == NULL || (b[0] != '0' && b[0] != '1'))
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != 0)
			return (0);
		result += (b[i] - '0') * (1 << (len - i - 1));
	}
	return (result);
}
