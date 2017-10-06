#include "holberton.h"
/**
 * _puts_recursion - writes the string s and a trailing newline to stdout
 * @s: the string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
