#include "holberton.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack, terminating null bytes (\0) not compared
 * @haystack: string
 * @needle: substring
 *
 * Return:pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n;

	for (i = 0; haystack[i]; i++)
	{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[i + n] != needle[n])
				break;
		}
		if (needle[n] == '\0')
			return (haystack + i);
	}
	return (0);
}
