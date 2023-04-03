#include "lists.h"

/**
 * free_listint - THe function to free a ll
 * @head: The head of the ll
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
