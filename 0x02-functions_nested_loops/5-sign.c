#include <stdio.h>

/**
 * print_sign - Entry point
 * @n: The number to be checked
 * Return: 1 if n is greater than 0, -1 if n is less than 0 otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("%d\n", '+');
		return (1);
	}
	else if (n < 0)
	{
		printf("%d\n", '-');
		return (-1);
	}
	else
	{
		printf("%d\n", '0');
		return (0);
	}
}
