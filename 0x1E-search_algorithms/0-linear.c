#include "search_algos.h"

/**
  * linear_search - function searches for a value in an array
  *                 of integers using linear search.
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: first index where value is located,
  *	If value is not present in array or if array is NULL, return -1.
  *
  * Description: Prints a value every time it is compared in the array.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}

	return (-1);
}
