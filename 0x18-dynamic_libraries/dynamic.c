#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to stdout
 * @c: charactar to write
 * Return: character written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - checks for lowercase
 * @c: character to check
 * Return: 1 or 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');	
}
/**
 * _isalpha - checks if an alpabet
 * @c: character to check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return (_islower(c) || _isupper(c));
}
/**
 * _abs - calculate absolute value of a digit
 * @n: int value
 * Return: positive n
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}
/**
 * _isupper - check for uppercase
 * @c: char to check
 * Return: the uppercase char
 */
int _isupper(int c)
{
	 return (c >= 'A' && c <= 'Z');
}
/**
 * _isdigit - check if c is a digit
 * @c: value to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - find length of string
 * @s: address of char
 * Return: length of char
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _puts - inserts a string
 * @s: address of string to inserts
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
/**
 * *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: address of original  string
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
/**
 * _atoi - implementation of atoi func
 * @s: address of string
 * Return: sign * result
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s)
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
/**
 * *_strcat - concatenate a string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    char *original_dest = dest;

    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (original_dest);
}
/**
 * *_strncat - concantenate a string
 * @dest: destination
 * @src: source
 * @n: int value
 * Return: original dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
/**
 * *_strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: int value
 * Return: original destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}
/**
 * _strcmp - compares a string
 * @s1: string1
 * @s2: string2
 * return: diff btw both string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * *_memset - memory set func
 * @s: first param
 * @b: second param
 * @n: int value
 * Return: original string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *original_s = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (original_s);
}
/**
 * *_memcpy - implementation of memcpy func
 * @dest: destination
 * @src: source
 * @n: int value
 * Return: original destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (original_dest);
}
/**
 * *_strchr - search for char in a string
 * @s: string to search
 * @c: character to search for
 * Return: null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	return (NULL);
}
/**
 * _strspn - sting span
 * @s: first sting
 * @accept: second string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && _strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * *_strpbrk - breaks string
 * @s: first parameters
 * @accept: second parameter
 * Return: null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	if (_strchr(accept, *s))
	{
		return(s);
	}
	s++;
	}
	return (NULL);
}
/**
 * *_strstr - searches for a string
 * @haystack: first paramater
 * @needle: second paramter
 * Return: nothing
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

	while (*h && *n && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
