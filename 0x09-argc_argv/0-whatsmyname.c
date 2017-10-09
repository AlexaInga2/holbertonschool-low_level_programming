#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints name of program, followed by \n
 * @argc: number of arguments passed to the function/program
 * "argument count"; argc contains the # of arguments passed to the program
 * @argv: array of pointers to each command line argument
 * "argument vector" = a one-dimensional array of strings. Each string is
 * one of the arguments that was passed to the program.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
