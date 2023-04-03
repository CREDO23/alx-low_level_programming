#include "lists.h"

/**
 * *add_nodeint_end - The function to add a node at the end
 * @head: The address of the head
 * @n: The integer of a ll
 *
 * Return: The adress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}

	return (new);
}
