#include "main.h"

/**
 * flip_bits - Get the flipped bit when get from n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The amount of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits = 0;
	int res = n ^ m;

	while (res)
	{
		if (res & 1)
			bits++;

		res >>= 1;
	}

	return (bits);
}
