#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
