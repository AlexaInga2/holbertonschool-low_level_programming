#include "holberton.h"
/**
 * _strncat - concatenates two strings and does not need to be nulled term
 * @dest: "Hello"
 * @src: "World!\n"
 * @n:how many bytes to transfer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
