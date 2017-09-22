#include "holberton.h"
/**
 * print_most_numbers - function that prints the numbers, from 0-9, followed /n
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if ((i != '2') && (i != '4'))
		_putchar(i);
	}
	_putchar('\n');
}
