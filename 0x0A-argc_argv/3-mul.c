#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts to integer
 * @s: string to be converted to integer
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int q, r, m, len, n, digit;

	q = 0;
	r = 0;
	m = 0;
	len = 0;
	n = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && n == 0)
	{
		if (s[q] == '-')
			++r;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (r % 2)
				digit = -digit;
			m = m * 10 + digit;
			n = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			n = 0;
		}
		q++;
	}

	if (n == 0)
		return (0);

	return (m);
}

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: if sucess 0, if error 1
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
