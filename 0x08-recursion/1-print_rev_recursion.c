#include "main.h"

/**
 * _print_rev_recursion - The reverse print funtion
 * @s: THe string to print
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
