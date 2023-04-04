#include "lists.h"

/**
 * delete_nodeint_at_index - The function
 * @head: The address to the head
 * @index: The node's index to be deleted
 *
 * Return: 1 if successed , -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy = *head;
	listint_t *tmp;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (idx = 0; idx < (index - 1); idx++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}

	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);

	return (1);
}
