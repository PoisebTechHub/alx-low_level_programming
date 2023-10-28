#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: number of arguments to be made
 * @argv: array of arguments
 * Return: is always 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
