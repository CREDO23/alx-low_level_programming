#include "function_pointers.h"

/**
 * array_iterator - Array Iterator
 * @array: The array
 * @size: The size of array
 * @action: The action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
