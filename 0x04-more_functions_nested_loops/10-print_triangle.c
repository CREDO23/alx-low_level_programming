#include "main.h"

/**
 * print_triangle - The funtion to print the trinanle
 * @size: The size of the triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 1; a <= size; a++)
	{

		for (b = 1; b <= size; b++)

		{

			if (b <= (size - a))

				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
