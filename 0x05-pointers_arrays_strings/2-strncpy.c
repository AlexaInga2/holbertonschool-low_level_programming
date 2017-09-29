#include "holberton.h"
/**
 * _strncpy - copies a string; most n bytes of src are copied.
 * @dest: destination of string
 * @src: the source string
 * @n: number of characters
 *
 * Return: pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
