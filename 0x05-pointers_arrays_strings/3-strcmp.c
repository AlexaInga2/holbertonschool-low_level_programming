#include "holberton.h"
/**
 * _strcmp - function compares the two strings s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Description: returns an integer less than, equal to, or greater than
 * zero if s1 is found, to be less than, to match, or be greater than s2.
 *
 * EXAMPLE: s1 -> s2 = -# , s1 == s2 = 0 , s2 -> s1 = +#
 * Negative if s1 is before s2, 0 if equal, and positive if s2 is before s1/
 *
 * Return: the different between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
