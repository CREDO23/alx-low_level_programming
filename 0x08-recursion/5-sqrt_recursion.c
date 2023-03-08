#include "main.h"

/**
 * _sqrt - The funtion that helps us to find the square of a number
 * @sqr: THe square
 * @n: THe number
 * Return: The square
 */
unsigned int _sqrt(int sqr, int n)
{
	if (sqr * sqr == n)
		return (sqr);
	if (sqr >= n)
		return (-1);

	return (_sqrt(sqr + 1, n));
}

/**
 * _sqrt_recursion- The square funtion
 * @n: The number
 * Return: The square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(0, n));
}
