#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
	char h[] = "Holberton\n";
	char j;

	while ((j = h[i++]) != '\0')
	{
		_putchar(j);
	}
	return (0);
}
