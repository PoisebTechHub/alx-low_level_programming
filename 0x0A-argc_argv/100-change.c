#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program prints the minimum number
 * @argc: number of arguments to be made
 * @argv: array of arguments
 * Return: if success 0, if not 1
 */
int main(int argc, char *argv[])
{
	int mnum, b, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	mnum = atoi(argv[1]);
	result = 0;

	if (mnum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && mnum >= 0; b++)
	{
		while (mnum >= coins[b])
		{
			result++;
			mnum -= coins[b];
		}
	}

	printf("%d\n", result);
	return (0);
}
