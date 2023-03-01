#include "main.h"

/**
 * *_strcat - THe function to concaten
 * @dest: The destination
 * @src: The source
 * @n: The lenth
 * Return: The concatended string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int lnd = 0;

	while (dest[i++])
	{
		lnd++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[lnd++] = src[i];
	}
	dest[lnd++] = '\0';'

	return (dest);
}
