#include "main.h"

/**
 * get_bit - The function to get the bit at the index
 * position
 * @n: The number
 * @index: The index
 *
 * Return: Value of bit at position (index)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
