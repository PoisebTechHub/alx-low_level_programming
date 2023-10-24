#include "main.h"
/**
 * _memset - function fills the first n bytes of variable s
 * @s: memory areas to be filled
 * @b: byte to be used to fill the memory area
 * @n: the number of bytes to fill the constant byte
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/* i is zero, and it is less than number to be filled */
	for (i = 0; i < n;)
	/* i will increase until it reaches the number to be filled */
	i++;
		{
			/* i will terminate when it reaches the bytes to be filled */
			s[i] = b;
		}
		return (s);
}
