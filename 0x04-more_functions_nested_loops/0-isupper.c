#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Check uppercase
 * @c: the character to be checked
 * Return: 1 if c is uppercase , 0 otherwise
 */
int _isupper(char c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
