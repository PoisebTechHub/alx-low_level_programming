#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to be created
 * Return: NULL, if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
		return (ptr);
}
