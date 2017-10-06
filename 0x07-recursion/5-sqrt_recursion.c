#include "holberton.h"
/**
 * find_sqrt - setting sqrt to 0 and recursively compute sqrt of n
 * @s: square root
 * @n: natural number
 * Return: sqrt of natural number (n) or -1 if negative
*/
int find_sqrt(int s, int n)
{
	if (s * s > n)
		return (-1);
	if (s * s == n)
		return (s);
	return (find_sqrt(s + 1, n));
}

#include "holberton.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number/
 * function returns the nonnegative square root of x
 * @n: natural square root
 *
 * Return: n does not have a natural square root
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(0, n));
}
