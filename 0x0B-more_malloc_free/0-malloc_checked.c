#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number/ size of bytes to the allocated memory
 *
 * Return: if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
