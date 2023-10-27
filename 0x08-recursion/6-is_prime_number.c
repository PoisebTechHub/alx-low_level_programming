#include "main.h"
int actual_prime(int n, int i)
/**
 * is_prime_number - indicates whether an integer is a prime or not
 * @n: number to be calculated
 * Return: if n is a prime number 1, if not 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - indicates that an integer is a prime number and calculates
 * @n: number to be calculated
 * @i: iterator
 * Return: if n is prime number 1, if not 0
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
