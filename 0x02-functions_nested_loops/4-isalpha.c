#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha -  checks for alphabetic character.
 * @c: parameter to check if alphebetical charater
 *
 * Return: 1 if c a letter, lowercase, or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}