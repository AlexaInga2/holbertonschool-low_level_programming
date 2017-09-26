#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * output of characters and strings... writes the string s & trailing
 * newline to stdout.
 * @str: the string to be printed
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
