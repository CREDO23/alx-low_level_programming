#include "lists.h"

/**
 * insert_nodeint_at_index - The function
 * @head: THe head
 * @idx: The index of the list where the node should be added
 * @n: THe data
 *
 * Return: The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *tmpl = *head;
	listint_t *tmpr;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (tmpl)
	{
		if (index == idx - 1)
		{
			tmpr = tmpl->next;
			tmpl->next = new;
			new->next = tmpr;

			index++;
		}

		index++;
		tmpl = tmpl->next;
	}

	if (index < idx)
		return (NULL);

	return (new);
}
