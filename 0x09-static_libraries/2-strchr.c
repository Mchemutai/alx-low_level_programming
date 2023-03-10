#include "main.h"

/**
 * *_strchr - a function that identifies a character in a string
 * @s: string to be searched
 * @c: character to find
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == c)
		{
			return (s + m);
		}
	}
	if (s[m] == c)
	{
		return (s + m);
	}
	return (0);
}

