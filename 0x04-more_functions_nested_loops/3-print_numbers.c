#include <stdio.h>
#include "main.h"

/**
 * print_numbers - The function to prints numbers
 * Retrun always 0
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
