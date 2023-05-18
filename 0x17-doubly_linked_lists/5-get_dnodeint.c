#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at a specific index
 * @head: The head of a ddl
 * @index: The index to get
 *
 * Return: The adress of the found node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			return (head);

		head = head->next;
		idx++;
	}

	return (NULL);
}
