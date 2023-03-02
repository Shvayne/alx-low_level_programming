#include "main.h"
/**
 * leet - encode into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (n[i] == letters[j] || n[i] == letters[j] - 32)
			{
				n[i] = numbers[j];
				break;
			}
		}
	}
}
