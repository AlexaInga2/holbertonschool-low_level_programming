#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: the array
 * @n: number of elemenets to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
