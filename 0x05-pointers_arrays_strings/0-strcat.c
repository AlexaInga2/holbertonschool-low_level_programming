#include "holberton.h"
/**
 * _strcat - concentrates two strings
 * @dest: Pointer "Hello"
 * @src: Pointer "World!/n"
 *
 * Return: a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
