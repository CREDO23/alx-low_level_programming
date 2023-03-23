#include "variadic_functions.h"

/**
 * print_numbers - The print numbers funtion
 * @separator: The separator
 * @n: The number of numbers to print
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(list, int), separator);
		else
			printf("%d", va_arg(list, int));
	}

	printf("\n");

	va_end(list);
}
