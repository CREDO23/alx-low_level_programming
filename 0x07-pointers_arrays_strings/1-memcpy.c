#include "main.h"

/**
 * *_memcpy - The funtion to copy
 * @src: The source
 * @n: The times to copy
 * @dest: The dest
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && *(dest + i))
	{
		*(dest + i) = *(src + i)

		i++;
	}

	return (dest);
}
