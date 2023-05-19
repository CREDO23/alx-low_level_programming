#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at index
 * @n: The data
 * @idx: The index
 * @h: The adress of the head
 *
 * Return: The afredd of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *head = *h, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0 && head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;

		*h = new;

		return (new);
	}

	while (head->next != NULL)
	{
		if (i == idx)
		{
			tmp = head->prev;
			tmp->next = new;
			new->next = head;
			new->prev = tmp;
			head->prev = new;

			return (new);
		}

		i++;
		head = head->next;
	}

	return (NULL);
}
