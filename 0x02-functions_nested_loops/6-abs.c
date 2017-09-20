#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: defines the integer
 *
 * Return: absalute value of r
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r);
}
