#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if ((i != '9') || (j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = '0';
	}
	putchar('\n');
	return (0);
}
