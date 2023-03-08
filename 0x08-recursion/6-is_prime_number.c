#include "main.h"

/**
 * _prim - The funtion that helps us to find the square of a number
 * @x: THe x
 * @n: THe number
 * @res: The res
 * Return: The res
 */
int _prim(int x, int n, int res)
{
	if (x < n)
	{
		if (n % x == 0)
			return (0);
		else
			return (_prim(x + 1, n, res));
	}
	else
		return (res);
}

/**
 * is_prime_number - The funtion to test
 * @n: THe number to test
 * Return: 1 if n is a prime number , otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n < 2)
		return (0);
	return (_prim(2, n, 1));
}
