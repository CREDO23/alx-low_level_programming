#include "main.h"

/**
 * *_strcat - THe function to concaten
 * @dest: The destination
 * @src: The source
 * @n: The lenth
 * Return: The concatended string
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;
	int lnd = 0;

	while (dest[i++])
	{
		lnd++;
	}
	for (j = 0; src[j] && i < ; j++)
	{
	dest[lnd++] = src[i];
	}

	return (dest);
}
