#include "main.h"

/**
 * rev_string - THe funtion to erverse string
 * @str: String to reverse
 * Return: Nothing
 */
void rev_string(char str[])
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
