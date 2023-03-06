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

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);

}
