#include "holberton.h"
/**
 * print_diagnoal - draws a straight line in the terminal
 * @n: parameter for gaging '_'
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int s, lines;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			for (lines = 0; lines < s; lines++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
