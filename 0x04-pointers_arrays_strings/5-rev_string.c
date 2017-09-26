#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: the string to reverse
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i, a = 0;
	char temp;

	for (i = 0; s[i]; i++)
		;
	i--;
	while (a <= i)
	{
		temp = s[a];
		s[a] = s[i];
		s[i] = temp;
		a++;
		i--;
	}
}
