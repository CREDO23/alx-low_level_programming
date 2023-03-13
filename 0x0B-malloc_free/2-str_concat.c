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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		ln++;
	

	for (i = 0; s2[i] != '\0'; i++)
		ln++;


	cnct = malloc(sizeof(char) * (ln + 1));

	if (cnct == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		cnct[i] = s1[i];
		j = i;
	}

	for (i = 0; s2[i]; i++)
		cnct[j++] = s2[i];

	cnct[ln] = '\0';

	return (cnct);
}
