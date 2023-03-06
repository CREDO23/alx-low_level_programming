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

	for (i = 0; s[i]; i++)
	{

		for (j = 0; accept[j]; j++)
		{

			if (s[i] == accept[j])
				break;

		}
		if (!accept[j])
			break;
		ln++;
	}

	return (ln);
}
