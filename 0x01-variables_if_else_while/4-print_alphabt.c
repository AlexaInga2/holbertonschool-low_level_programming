#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if ((l != 'q') && (l != 'e'))
			putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
