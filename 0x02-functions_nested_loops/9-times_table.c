#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 (Success)
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; _putchar('\n'), i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < 10; j++)
		{
			n = i * j;
			_putchar(' ');
			_putchar(n / 10 ? n / 10 + '0' : ' ');
			_putchar(n % 10 + '0');
			_putchar(',');
		}
	}
}
