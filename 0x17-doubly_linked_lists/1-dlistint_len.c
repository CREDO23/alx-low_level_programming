#include "lists.h"

/**
 * dlistint_len - Returns the number of node in a dll
 * @h: The head of the dll
 *
 * Return: The number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		nb++;
		h = h->next;
	}

	return (nb);
}
