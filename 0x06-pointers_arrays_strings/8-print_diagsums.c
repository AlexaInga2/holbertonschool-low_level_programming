#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: matrix of integers
 * @size: size of 'a'/ matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j, r = 0, c = 0;

	for (i = 0; i < size; ++i)
		r += (a + i * size)[i];
	for (j = 0; j < size; j++)
		c += (a + j * size)[--i];
	printf("%i, %i\n", r, c);
}
