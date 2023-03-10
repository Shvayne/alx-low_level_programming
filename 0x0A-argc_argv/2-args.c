#include <stdio.h>
/**
 * main - print all arguments
 * Return: 0 or 1
 * @argc: argument count
 * @argv: array of argument
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
