#include "main.h"

/**
 * _strspn - The funtion
 * @s: The string
 * @accept: The acccept bbytes
 * Return: The legnth
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ln = 0;
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (*(accept + j))
		{
			if (s[i] == *(accept + j))
				ln++;
			else
				return (ln);
			j++;
		}

	}

	return (ln);
}
