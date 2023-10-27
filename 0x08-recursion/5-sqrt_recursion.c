#include "main.h"
/**
 * perfect_sqrt - return the natural square root of a number
 * @y: input number
 * @z: square number
 * @k: iterator
 * Return: number if square root, if not -1
 */
int perfect_sqrt(int y, int z)
{
if (y * y == z)
{
return (y);
}
else if (y * y > z)
{
return (-1);
}
return (perfect_sqrt(z, y + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 * Retrun: number is square root, if not -1
 */
int _sqrt_recursion(int n)
{
return (perfect_sqrt(0, n));}
}
