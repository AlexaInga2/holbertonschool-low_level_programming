#include "holberton.h"
#include <ctype.h>
/**
 * _islower -  checks for lowercase character
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