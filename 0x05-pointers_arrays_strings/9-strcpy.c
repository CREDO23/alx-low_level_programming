#include "main.h"

/**
 * *_strcpy - The funtion
 * @dest: The destination
 * @src: The source
 * Return: THe dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i])
	{
		dest[i] = src[i];
	}

	return (dest);
}
