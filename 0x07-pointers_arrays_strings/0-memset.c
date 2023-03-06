#include "main.h"

/**
 * _memset - The fution
 * @s: The memory area
 * @b: The constant
 * @n: The times to fill the constsnt b
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b

		i++;
	}

	return (s);
}
