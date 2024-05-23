#include "search_algos.h"

/**
  * jump_search - this function searches for a value in a sorted array
  * 		of integers using jump search.
  * @array: this serves as a pointer to the first element of the array.
  * @size: The number of elements contained in the array to be searched.
  * @value: This serves as the value to find.
  *
  * Return: -1, If the value isn't present or the array is NULL.
  *         otherwise, return the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
