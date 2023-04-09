#include "main.h"

/**
 * get_endianness - The function to get indianness of a computer
 *
 * Return: The indianness
 */
int get_endianness(void)
{
	int number = 1;

	char *c = (char *)&number;

	if (*c)
		return (1);
	else
		return (0);
}
