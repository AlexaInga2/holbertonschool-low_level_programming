#include "holberton.h"
/**
 * puts2 -  function that prints one char out of 2 of a string, followed by \n
 * @str:
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
