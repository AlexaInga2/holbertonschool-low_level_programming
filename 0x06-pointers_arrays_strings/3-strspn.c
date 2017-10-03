#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * function calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: substring
 * @accept: string
 *
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a;

	for (i = 0; s[i]; i++)
	{
		for (a = 0; accept[a]; a++)
		{
			if (s[i] == accept[a])
				break;
		}
		if (!accept[a])
			break;
	}
	return (i);
}
