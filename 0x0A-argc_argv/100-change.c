#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints coin balance
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	int coins[] = {25, 10, 5, 1};
	int num_coins = sizeof(coins) / sizeof(int);
	int i;
	int count = 0;

	for (i = 0; i < num_coins; i++)
	{
		while (cent >= coins[i])
		{
			cent -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
