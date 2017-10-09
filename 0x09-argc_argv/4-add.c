#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments passed to the function/program
 * "argument count"; argc contains the # of arguments passed to the program
 * @argv: array of pointers to each command line argument
 * "argument vector" = a one-dimensional array of strings. Each string is
 * one of the arguments that was passed to the program.
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, c, sum = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	while (--argc)
	{
		++argv;
		for (i = 0; (c = *(*argv + i)); ++i)
		{
			if (!(isdigit(c)))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);
}
