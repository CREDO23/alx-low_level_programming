#include "main.h"

/**
 * print_square - The function to print the square
 * @size: The size of the squre
 * Return Nothing
 */
void print_square(int size)
{
	int h = 0;
	int l = 0;

	if (size <= 0)
		_putchar('\n');

	while (h < size)
	{
		for (l = 0; l < size; l++)
			_putchar('#');

		h++;
		_putchar('\n');
	}

}
