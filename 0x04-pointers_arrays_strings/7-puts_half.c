#include "holberton.h"
/**
 * puts_half -  function that prints half of a string, followed by a new line
 * @str: the string to print
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j, h;

	if (str != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			;
		}
		h = i / 2;
		for (j = i - h; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
