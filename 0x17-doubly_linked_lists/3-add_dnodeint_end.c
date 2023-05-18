#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a dll
 * @head: The head of the ddl
 * @n: The data to add
 *
 * Return: The adress of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	h = *head;

	if (h == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (h->next != NULL)
	{
		h = h->next;
	}

	h->next = new;
	new->prev = h;

	return (new);
}
