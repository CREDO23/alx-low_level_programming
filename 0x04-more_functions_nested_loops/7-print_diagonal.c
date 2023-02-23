#include <stdio.h>

/**
 * print_diagonal - The function to print diagonal
 * @n: The length of the diagonal
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (i > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
