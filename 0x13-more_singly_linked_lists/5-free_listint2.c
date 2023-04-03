#include "lists.h"

/**
 * free_listint2 - THe function to free a ll
 * @head: The address of the head of the ll
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	while (*head)
	{
		nxt = (*head)->next;
		free(*head);

		*head = nxt;
	}

	*head = NULL;
}
