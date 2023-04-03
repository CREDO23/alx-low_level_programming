#include "lists.h"

/**
 * pop_listint - The function to pop a ll
 * @head: THe address of the head of the ll
 *
 * Return: The head's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head)->next;
	int data = (*head)->n;
	
	if (*head == NULL)
		return (0);

	free(*head);

	*head = tmp;

	return (data);


}
