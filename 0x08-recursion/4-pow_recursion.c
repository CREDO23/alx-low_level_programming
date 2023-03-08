#include "main.h"

/**
 * _pow_recursion - The funtion to print the power
 * @x: The number
 * @y: THe powwer
 * Return: The power of x by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
