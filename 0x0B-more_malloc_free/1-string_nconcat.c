#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 and dest string
 * @s2: string 2
 * @n: number of bytes from s2 to con
 *
 * Return: if the function fails return NULL or new string if success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	n = (n > j ? j : n);
	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; s1 && s1[i]; ++i)
		p[i] = s1[i];
	for (j = 0; s2 && j < n; ++j)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
