#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
