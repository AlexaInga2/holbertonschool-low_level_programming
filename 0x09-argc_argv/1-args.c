#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed to the function/program
 * "argument count"; argc contains the # of arguments passed to the program
 * @argv: array of pointers to each command line argument
 * "argument vector" = a one-dimensional array of strings. Each string is
 * one of the arguments that was passed to the program.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
