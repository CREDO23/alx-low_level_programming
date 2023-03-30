#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - Will be executed before main function
 *
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
