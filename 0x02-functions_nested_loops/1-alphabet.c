#include "holberton.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
