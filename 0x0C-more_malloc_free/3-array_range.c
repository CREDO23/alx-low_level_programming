#include "main.h"

/**
 * *array_range - The function
 * @min: The min integer
 * @max: The max integer
 * Return: An array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (; min <= max; min++)
		ptr[i++] = min;

	return (ptr);

}
