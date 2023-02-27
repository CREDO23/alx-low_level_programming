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
	int len = 0;

	while (src[i++])

		len++;

	for (i = 0; i <= len; i++)


		dest[i] = src[i];


	return (dest);
}
