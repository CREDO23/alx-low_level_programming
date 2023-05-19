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
	dlistint_t *h = *head, *prev;

	while (h != NULL)
	{
		if (i == index)
		{
			if (index != 0)
			{
				prev->next = h->next;
				if (h->next != NULL)
					h->next->prev = prev;
			}
			else
			{
				*head = h->next;
				if (*head)
					(*head)->prev = NULL;
			}

			free(h);
			return (1);
		}

		i++;
		prev = h;
		h = h->next;
	}

	return (-1);
}

