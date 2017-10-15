#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: the size of array/ the memory to print/create
 * @c: char to initizlize array & the address of the memory to print
 *
 * Return: Returns NULL if size = 0, returns pointer to the array,if fails NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		array[i] = c;
	return (array);

}
