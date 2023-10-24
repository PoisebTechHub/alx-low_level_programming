#include "main.h"
/**
 * _memcpy -create a function that copies memory area
 * @dest: copies to this memory area
 * @src: copies from this memory area
 * @n: number of bytes copied
 * Return: pointer resturns to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}


