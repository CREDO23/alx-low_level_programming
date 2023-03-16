#include "main.h"

/**
 * *_calloc - The funtion
 * @nmemb: Nbr of elements
 * @size: The size of array
 * Return: The pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	ch = ptr;

	for (i = 0; i < (size * nmemb); i++)
		ch[i] = '\0';

	return (ptr);
}
