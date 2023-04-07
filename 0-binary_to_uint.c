#include "main.h"

/**
 * binary_to_uint - The function to convert a chain of 0 and 1 to
 * an unsigned integer
 * @b: The chain of characters
 *
 * Return: The unsigned integer value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0;
	int len = 0;

	if (b[len])
	{

	while (b[len])
	{
		if ((b[len] != '1') && (b[len] != '0'))
			return (0);

		out = out << 1;
		out = out + (b[len] - 48);

		len++;
	}

	return (out);
	}
	else
		return (0);
}
