#include "holberton.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer 1
 * @b: integer 2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
