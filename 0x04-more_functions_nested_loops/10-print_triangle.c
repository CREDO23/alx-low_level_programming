#include "main.h"

/**
 * print_triangle - The funtion to print the trinanle
 * @size: The size of the triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j <= size; j++)
			{
				if (j >= (size - i))
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
