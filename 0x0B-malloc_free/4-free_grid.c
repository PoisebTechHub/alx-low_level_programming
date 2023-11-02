#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees 2 dimensional grid
 * @grid: 2 dimensional array of integers
 * @height: grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
