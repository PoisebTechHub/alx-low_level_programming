#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return:pointer to array, if not NULL
 */
int **alloc_grid(int width, int height)
{
	int **ttt;
	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ttt = malloc(sizeof(int *) * height);
	if (ttt == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		ttt[w] = malloc(sizeof(int) * width);
		if (ttt[w] == NULL)
		{
			for (w--; w >= 0; w--)
			free(ttt[w]);
			free(ttt);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			ttt[w][h] = 0;
	}
	return (ttt);
}
