#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concancate two strings
 * @dest: destination
 * @src: input value
 */
char *_strcat(char *dest, char *src)
{
	int len1 = strlen(dest);
	int len2 = strlen(src);

	char* newstring = (char*) malloc (len1 + len2 + 1);

	strcpy(newstring, dest);
	strcat(newstring, src);
	return (newstring);
}
