#include "lists.h"

/**
 * get_nodeint_at_index - The function
 * @index: The index of node to be returned
 * @head: The head of the ll
 *
 * Return: The nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int n = 0;

	while (h)
	{
		if (n == index)
			return (h);
		n++;
		h = h->next;
	}

	return (NULL);
}
