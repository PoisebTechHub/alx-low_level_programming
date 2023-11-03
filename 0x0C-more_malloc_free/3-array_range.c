#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates a function that create an array of integers.
 * @min: first value of array.
 * @max: second value of array.
 * Return: NULL, if min is greater than max or the function fails,
 * if not, return pointer.
 */
int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = min++;
	{
	return (array);
	}
}
