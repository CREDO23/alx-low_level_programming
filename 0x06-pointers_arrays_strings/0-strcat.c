#include "main.h"

/**
 * *_strcat - THe function to concaten
 * @dest: The destination
 * @src: The source
 * Return: The concatended string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int lnd = 0;

	while (dest[i++])
	{
		lnd++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[lnd++] = src[i];
	}

	return (dest);
}
