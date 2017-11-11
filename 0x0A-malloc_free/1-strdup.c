#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string &  duplicate of the
 * string str. New string memory obtained w/ malloc & freed with free
 * @str: string to be copied
 *
 * Return: NULL if str = NULL. Success = _strdup returns a pointer to
 * the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);

/* get the size of string1 */
	for (i = 0; str[i]; i++)
		;
/* allocate memory for str2 */
	s = (char *) malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
/* copy str to str2 */
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	s[i] = s[i];
	return (s);
}
