#include "holberton.h"
/**
 * set_string -sets the value of a pointer to a char
 * @s: double pointer
 * @to: pointer
 *
 * Return: the sum of both parameters
 */
void set_string(char **s, char *to)
{
	*s = to;
}