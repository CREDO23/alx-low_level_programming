#include "main.h"

/**
 * *malloc_checked - The funtion
 * @b: The size of memory to allocate
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	return ((void *)malloc(b));
}
