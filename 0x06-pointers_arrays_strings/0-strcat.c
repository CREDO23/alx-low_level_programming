#include "main.h"

/**
 * *_strcat - THe function to concaten
 * @dest: The destination
 * @src: The source
 * Return: The concatended string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lnd = 0;

	while (dest[i++])
	{
		lnd++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[lnd++] = src[i];
	}

	return (dest);
}
