#include "lists.h"

/**
 * free_dlistint - Frees a ddl
 * @head: The head of the ddl
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}

}
