#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the min/ lowest value in array
 * @max: the max/ highest value in array
 *
 * Return: pointer to the new array, NULL if min > max OR if malloc fails
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1)); /* max - min +1 is the len */
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; ++i)
		p[i - min] = i;
	return (p);
}
