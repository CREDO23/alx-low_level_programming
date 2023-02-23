#include <stdio.h>
#include "main.h"

/**
 * _isdigit - The function to test the digit
 * @c: The digit to be checked
 * Return: 1 if x is a digit , otherwise 0
 */
int _isdigit(int c)
{
	if (c > '0' && c < '9')
		return (1);
	else
		return (0);
}
