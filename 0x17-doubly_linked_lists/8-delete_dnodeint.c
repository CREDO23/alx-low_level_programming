#include "lists.h"

/**
 * delete_dnodeint_at_index - Insert a node at index
 * @index: The index
 * @head: The adress of the head
 *
 * Return: The afredd of the new node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = *head, *next, *prev;

	while (h->next != NULL)
	{
		if (i == index)
		{
			if (index != 0)
			{
				next = h->next;
				prev = h->prev;
				next->prev = prev;
				prev->next = next;
				free(h);
			}
			else
			{
				*head = (*head)->next;
				if (*head)
					(*head)->prev = NULL;
			}

			return (1);
		}

		i++;
		h = h->next;
	}

	return (-1);
}

