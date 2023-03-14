#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory for prev func
 * @grid: grid
 * @height: column size
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
