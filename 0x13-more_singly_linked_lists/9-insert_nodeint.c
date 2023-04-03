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
	listint_t *tmp = *head;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
