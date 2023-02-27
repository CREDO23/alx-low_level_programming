#include "main.h"

/**
 * swap_int - The funtion to swap 2 int
 * @a: The first int
 * @b: The second int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
