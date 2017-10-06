#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - calculates the length of the string s
 * excluding the terminating null byte ('\0')
 * @s: the string
 *
 * Return: length of s / number of bytes in the string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
