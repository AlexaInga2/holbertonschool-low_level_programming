#include "holberton.h"
/**
 * _strlen - gives length of string
 * @s: the stringt
 * Return: length of string
*/
int _strlen(char *s) /* reusing old function */
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

#include "holberton.h"
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: number to check
 *
 * Return: 1 if int is a prime number, 0 if not
 */
int is_palindrome(char *s)
{

	int l = _strlen(s) - 1;

	return (is_palindrome(s, s + 1));
}
