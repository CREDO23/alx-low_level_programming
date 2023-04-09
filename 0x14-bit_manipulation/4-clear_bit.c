#include "main.h"

/**
 * clear_bit - The function to clear a bit at position (index)
 * @n: The number
 * @index: The index
 *
 * Return: 1 if everything works good otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
