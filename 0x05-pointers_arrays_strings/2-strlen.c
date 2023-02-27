#include "main.h"

/**
 * _strlen - The funtion to display the length
 * @s: The pointer to the string
 * Return: The length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
