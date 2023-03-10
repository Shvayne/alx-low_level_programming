#include <stdio.h>
/**
 * main- entry point
 * @argc: argument count
 * @argv: array holdin argument
 * Return: 1 or 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
