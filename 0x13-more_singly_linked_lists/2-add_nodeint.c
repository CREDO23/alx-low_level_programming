#include "lists.h"

/**
 * *add_nodeint - The function to add a node at the begining of a ll
 * @head: A pointer that points to the head of a ll
 * @n: The integer of the ll
 *
 * Return: The adress to the head of the new ll
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
