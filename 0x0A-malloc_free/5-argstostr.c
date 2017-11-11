#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a function that concentrates all program's arguments
 * @ac: number of arguments w/i string
 * @av: array of arguments, double pointer array
 *
 * Return: pointer/& to a new string, or NULL if ac or av = 0 | fails
 */
char *argstostr(int ac, char **av)
{
	int index, count, sum;
	char *nptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (count = 0; av[index][count]; count++)
			;
		sum = sum + count + 1;
	}
	nptr = malloc(sum * sizeof(char) + 1);
	if (nptr == NULL)
		return (NULL);
	sum = 0;
	for (index = 0; index < ac; index++)
	{
		for (count = 0; av[index][count]; count++)
		{
			nptr[sum] = av[index][count];
			sum++;
		}
		nptr[sum] = '\n';
		sum++;
	}
	nptr[sum] = '\0';
	return (nptr);
}
