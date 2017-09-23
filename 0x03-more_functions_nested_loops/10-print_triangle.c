#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: parameter to print # for triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int a, b, c, sp, h;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			sp = size - a;
			h = size - sp;
			for (b = 1; b <= sp; b++)
				_putchar(' ');
			for (c = 1; c <= h; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
