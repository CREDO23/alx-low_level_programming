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

	while (index < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		index++;
	}

	if (index < idx - 1)
		return (NULL);

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
