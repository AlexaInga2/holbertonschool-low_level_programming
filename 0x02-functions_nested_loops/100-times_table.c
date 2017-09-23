#include "holberton.h"
/**
 * print_times_table - prints the 9 times table, starting with 0
 *
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, k, sum;

	for (i = 0; i < n; _putchar('\n'), i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 1; j < n; j++)
		{
			k = 100;
			r = i * j;
			_putchar(r / k ? r % k + '0' : ' ');
			_putchar(r % 10 + '0');
			if (j < 9)
				_putchar(',');
		}
	}
}
