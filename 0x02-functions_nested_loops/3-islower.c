#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Entry point
 * Return: 1 if the char is lowercase else 0 
 */
int _islower(char c)
{
	int o;

	o = islower(c);
	if (o > 0)
		return (1);
	else
		return (0);
}
