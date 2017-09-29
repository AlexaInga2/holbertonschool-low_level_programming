#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 *,, ;, ., !, ?, ", (, ), {, and }
 * Return: address/ pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = "\t\n,;.!?\"(){}";

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
		{
			if (i == 0)
				s[i] -= 'a' - 'A';
		}
		else
		{
			for (j = 0; j <= 32; j++)
			{
				if (sep[j] == s[i - 1])
					s[i] -= 'a' - 'A';
			}
		}
	}
	i++;
	return (s);
}
