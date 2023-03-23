#include "variadic_functions.h"

/**
 * sum_them_all - Sum all argument
 * @n: Number of arguments
 *
 * Return: The sum of argument
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
	unsigned int i;
	va_list a_list;

	if (n == 0)
		return (0);

	va_start(a_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);

	va_end(a_list);

	return (sum);

}

