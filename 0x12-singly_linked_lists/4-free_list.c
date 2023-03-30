#include "lists.h"

/**
 * free_list - The function to free a ll
 * @head: The head of ll
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		if (head->str)
			free(head->str);
		free(head);
		head = head->next;
	}

}
