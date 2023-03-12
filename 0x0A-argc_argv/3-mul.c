#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * myAtoi - changes command line string to integer
 * @str: string input
 * Return: int
 */
int myAtoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/**
 * main - calculate command line argument
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = myAtoi(argv[1]);
	int j = myAtoi(argv[2]);
	int result = i * j;

	if (argc < 3 && argc > 3 || argc < 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
		return (0);
}
