#include "main.h"

/**
 * *_strncpy- The function to copy
 * @dest: The destination
 * @src: The source
 * @n: The legth of bytes
 * Return: The char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
