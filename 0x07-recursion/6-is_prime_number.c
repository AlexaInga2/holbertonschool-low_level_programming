#include "holberton.h"
/**
 * find_prime - setting sqrt to 0 and recursively compute sqrt of n
 * @div: current divisor
 * @n: natural number to test
 * Return: prime number (n) or -1 if not
*/
int find_prime(int n, int div)
{
	if (div == n)
		return (div);
	if (n % div  == 0)
		return (0);
	return (find_prime(n, div + 2));
}

#include "holberton.h"
/**
 * is_prime_number - returns 1 if the input int is a prime #, 0 if !
 * @n: number to check
 *
 * Return: 1 if int is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (!(n % 2)) /* this checks if prime */
		return (0);
	if (find_prime(n, 3))
		return (1);
	return (0);
}
