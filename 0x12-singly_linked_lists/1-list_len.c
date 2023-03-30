#include "lists.h"

/**
 * list_len - The function to calculate the length of nodes for a ll
 * @h: The head of ll
 *
 * Return: The length of ll
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
