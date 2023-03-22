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
	int i, res;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);

			if (res != 0)
				return (i);
		}

		return (-1);

	}

	return (-1);
}
