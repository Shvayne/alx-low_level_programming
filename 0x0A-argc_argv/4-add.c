#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check for string
 * @str: array string
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);

}
/**
 * myAtoi - change string to int
 * @str: string pointer
 * Return: 0
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
 * main - add command ling arg
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int str_to_int;
	int sum = 0;
	int count = 1;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = myAtoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
