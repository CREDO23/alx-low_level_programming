#include "main.h"

/**
 * set_bit - The function to set 1 at position (index)
 * @index: The index which hold the bit to be set
 * @n: The number
 *
 * Return: 1 if everything works otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
