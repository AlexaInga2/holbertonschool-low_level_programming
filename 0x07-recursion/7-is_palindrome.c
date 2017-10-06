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
 * test_palindrome - checks string w/ itself
 * @s: original string
 * @e: end of string
 *
 * Return: 1 if a palindrome, 0 if not
 */
int test_palindrome(char *s, char *e)
{
	if (*s != *e)
		return (0);
	if (s >= e)
		return (1);
	return (test_palindrome(++s, --e));
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

	int le = _strlen(s) - 1;

	return (test_palindrome(s, s + le));
}
