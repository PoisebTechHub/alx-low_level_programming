#include "main.h"
#include <stdlib.h>
/**
 * _realloc -creates a function that reallocates a memory block
 * using malloc and free.
 * @ptr: initial pointer allocated to old memory.
 * @old_size: old bytes allocated in heap.
 * @new_size: new bytes allocated by the realloc function.
 * Return: pointer to new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t k, new = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		new  = old_size;
	for (k = 0; k < new; k++)
		p[k] = oldp[k];
	free(ptr);
	return (p);
}
