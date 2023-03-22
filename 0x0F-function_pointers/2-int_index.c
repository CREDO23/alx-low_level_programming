#include "function_pointers.h"

/**
 * int_index - Searchs for an integer
 * @array: The array
 * @size: The of array
 * @cmp: Funtion to compare value
 *
 * Return: The index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}

		return (-1);

	}

	return (0);
}
