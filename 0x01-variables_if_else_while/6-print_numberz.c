#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sd = 48;

	while (sd < 58)
	{
		putchar(sd);
		sd++;
	}
	putchar('\n');
	return (0);
}
