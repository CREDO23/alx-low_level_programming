#include <stdio.h>

/**
 * print_to_98 - Print to 98
 * @n: The first number to be printed
 * Return: Always 0
 */
int print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
	return (0);
}

