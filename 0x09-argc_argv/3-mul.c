#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments passed to the function/program
 * "argument count"; argc contains the # of arguments passed to the program
 * @argv: array of pointers to each command line argument
 * "argument vector" = a one-dimensional array of strings. Each string is
 * one of the arguments that was passed to the program.
 * Return: 0
 */
int main(int argc, char *argv[])
{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
