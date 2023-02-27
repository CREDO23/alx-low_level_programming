#include "main.h"

/**
 * puts2 - The funtion
 * @str: The string
 * Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
