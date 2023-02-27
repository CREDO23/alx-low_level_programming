#include "main.h"

/**
 * _strlen - The funtion to display the length
 * @s: The pointer to the string
 * Return: The length of s
 */
int _strlen(char *s)
{
	char arr[] = *s;
	int i;

	for (i = 0; arr[i] != '\0'; ++i);
	return (i);
}
