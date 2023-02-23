#include "main.h"

/**
 * print_diagonal - The function to print diagonal
 * @n: The length of the diagonal
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
}
