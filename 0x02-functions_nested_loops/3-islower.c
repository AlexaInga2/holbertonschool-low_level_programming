#include "holberton.h"
#include <ctype.h>
/**
 * _islower -  checks for lowercase character
 * @c: parameter to loop through to see if char is lowercase
 *
 * Return: 1 if c is lowecase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
