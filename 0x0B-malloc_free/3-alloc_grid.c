#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - a pointer to a 2D array of int
 * @width: row
 * @height: column
 * Return: pointer to arrray
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));
	if (!grid)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
