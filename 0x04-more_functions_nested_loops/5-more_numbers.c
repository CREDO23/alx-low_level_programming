#include "main.h"

/**
 * more_numbers - Funtion to print
 * Return: Always 0
 */
void more_numbers(void)
{
	char i, a, b, c;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
				b = c;
			else
			{
				a = c / 10;
				b = c % 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		i++;
	}

}

