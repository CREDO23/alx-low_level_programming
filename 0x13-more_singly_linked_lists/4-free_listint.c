#include "lists.h"

/**
 * free_listint - THe function to free a ll
 * @head: The head of the ll
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nxt;

	while (head)
	{
		nxt = head->next;
		free(head);

		head = nxt;
	}
}
