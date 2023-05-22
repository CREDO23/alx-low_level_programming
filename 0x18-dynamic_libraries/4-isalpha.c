#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Entry point
 * @c: The char to be checked
 * Return: 1 if c is lowercase or uppercase
 */
int _isalpha(char c)
{
	int o;

	o = isalpha(c);
	if (o > 0)
		return (1);
	else
		return (0);
}
