#include "main.h"

/**
 * print_square - The function to print the square
 * @size: The size of the squre
 * Return Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
