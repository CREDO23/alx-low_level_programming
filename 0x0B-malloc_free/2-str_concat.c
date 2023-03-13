#include "main.h"

/**
 * *str_concat - The funtion to concaten
 * @s1: The strint 1
 * @s2: The string 2
 * Return: The concateenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, ln = 0;
	char *cnct;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			ln++;
	}

	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			ln++;
	}

	cnct = malloc(sizeof(char) * ln);

	if (cnct == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cnct[i] = s1[i];
		j = i;
	}

	for (i = j + 1; s2[i]; i++)
		cnct[i] = s2[i];

	cnct[ln] = '\0';

	return (cnct);
}
