#include "search_algos.h"

/**
  * interpolation_search - a function that search for a value in a sorted array
  * 			of integers using interpolation search.
  * @array: Serves as a pointer to the first element of the array to search.
  * @size: Number of elements contained in the array.
  * @value: This serves as the value to search for.
  *
  * Return: the first index where the value is located.
  *	If the value is not present or the array is NULL, -1.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t k, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		k = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (k < size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", k);
			break;
		}

		if (array[k] == value)
			return (k);
		if (array[k] > value)
			r = k - 1;
		else
			l = k + 1;
	}

	return (-1);
}
