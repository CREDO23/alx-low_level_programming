#include "main.h"

/**
 * _put - The funtion to put a strint in stdout
 * @s: The string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
