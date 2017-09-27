#include "holberton.h"
/**
 * print_rev -function that prints a string, in reverse
 * @s: the string to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++)
		;
	for (j = (i - 1); s[j]; j--)
		_putchar(s[j]);
	_putchar('\n');
}
