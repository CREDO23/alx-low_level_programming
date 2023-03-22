#include "function_pointers.h"

/**
 * print_name - Print the name
 * @name: The name to print
 * @f: A pointer to a function which will perform the printing
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
