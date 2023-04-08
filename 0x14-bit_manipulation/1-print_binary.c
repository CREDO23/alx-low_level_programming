#include "main.h"

/**
 * print_binary - Function to convert a number to binary
 * @n: The number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
		print_binary(n >> 1);

	n & 1 ? _putchar(49) : _putchar(48);

}
