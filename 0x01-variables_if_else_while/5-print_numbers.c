#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sd = 0;

	while (sd < 10)
	{
		printf("%i",sd);
		sd++;
	}
	putchar('\n');
	return (0);
}
