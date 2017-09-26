#include "holberton.h"
/**
 * _strlen - function calculates the length of the string s, excluding the
 * terminating null byte ('\0')
 * @s: the string being calculated and returned
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
