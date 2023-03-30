#include "lists.h"

/**
 * *add_node_end - The function a node at the end of a ll
 * @head: The head of ll
 * @str: THe string to be added as value
 *
 * Return: The adress of the head of the ll
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while(str[i])
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
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
