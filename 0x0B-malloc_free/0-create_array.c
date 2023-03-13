#include "main.h"

/**
 * *create_array - Create an array
 * @size: THe size of the table
 * @c: THe character
 * Return: A poiter to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
