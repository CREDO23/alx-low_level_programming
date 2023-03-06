#include "main.h"

/**
 * *_strchr - The funtion to locates
 * @s: The string
 * @c: The character to search
 * Return: The first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
