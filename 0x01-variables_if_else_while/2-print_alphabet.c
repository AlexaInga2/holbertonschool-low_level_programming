#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
	return (0);
}
