#include "list.h"
#include "unistd.h"

/**
 * _putchar - The function to write a character in the stout
 * @c: The character to be printed
 *
 * Return: Always 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
