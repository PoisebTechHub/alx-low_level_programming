#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: size of array
 * @action: pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
		action(array[k]);
}
