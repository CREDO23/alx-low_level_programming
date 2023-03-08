#include "main.h"

/**
 * _puts_recursion - THe recursion funtion
 * @s: The string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}

	_putchar(*s);
	_put_recursion(s++);
}
