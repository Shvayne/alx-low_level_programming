#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - simple calculator
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, sol;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	operation = get_op_func(argv[2]);
	if (operation == 0)
	{
		printf("Error\n");
		exit(99);
	}
	sol = operation(i, j);
	printf("%d\n", sol);
	return (0);
}
