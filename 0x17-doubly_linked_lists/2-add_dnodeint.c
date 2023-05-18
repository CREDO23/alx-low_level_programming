#include "lists.h"

/**
 * add_dnodeint - Adds a node at the begining of a dll
 * @head: The head of the dll
 * @n: The new data to add in the dll
 *
 * Return: The adress of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	h = *head;

	new->n = n;
	new->prev = NULL;

	if (h != NULL)
	{
	new->next = h;
	h->prev = new;
	}

	*head = new;

	return (new);
}
