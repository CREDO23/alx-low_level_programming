#include "variadic_functions.h"

/**
 * print_strings - The prints strings function
 * @separator: The separator
 * @n: The numbers of strings passed
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);

		if (separator != NULL && i < n - 1)
		{
			if (str != NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}


	printf("\n");

	va_end(list);
}
