#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, n, t, o;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			t = n / 10;
			o = n % 10;

			if (t > 0)
				_putchar(t + '0');
			_putchar(o + '0');
		}
		_putchar('\n');
	}
}
