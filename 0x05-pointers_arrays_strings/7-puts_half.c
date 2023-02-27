#include "main.h"

/**
 * puts_half - The funtion to print the half
 * @str: The string to be print in half
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0;
	int j;


	while (s[i] != '\0')
	{
		l++;
		i++
	}
	if (l % 2 == 0)
	{
		for (j = l / 2; j <= l; j++)
		{
			_Putchar(j);
		}
	}
	else
	{
		for (j = ((l - 1) / 2) + 1; j <= l; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
