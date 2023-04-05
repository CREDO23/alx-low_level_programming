#include "lists.h"

/**
 * reverse_listint - The function.
 * @head: A pointer to the address of the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head)->next = prev;

	return (*head);
}
