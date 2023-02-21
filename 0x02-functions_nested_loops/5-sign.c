#include <stdio.h>

/**
 * print_sign - Entry point
 * @c: The number to be checked
 * Return: 1 if n is greater than 0, -1 if n is less than 0 otherwise 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		printf("%d\n", '+');
		return (1);
	}
	else if (c < 0)
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
