#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str. New string memory is obtained w/ malloc, and freed with free
 * @str: string to be copied
 *
 * Return: NULL if str = NULL. Success = _strdup returns a pointer to
 * the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

/* get the size of string1 */
	for (i = 0; str[i]; ++i)
		;
	++i;
/* allocate memory for str2 */
	s = (char*) malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
/* copy str to str2 */
	for (i = 0; str[i]; ++i)
		s[i] = str[i];
	s[i] = s[i];
	return (s);
}

/**
 * OBJECTIVES:
 * 1. Check if STR is NULL
 * 2. Get size of STR
 * 3. allocate memory for new string (str2)
 * 4. if malloc erred, return NULL
 * 5. copy STR to str2 *
 * 6. return str on !
 */
