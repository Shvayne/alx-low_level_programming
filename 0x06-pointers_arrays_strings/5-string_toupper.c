#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i])
	{
		n[i] = toupper(n[i]);
		i++;
	}
	return (0);
}
