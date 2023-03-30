#include "lists.h"

/**
 * *add_node - The function to add a node at the begining of a ll
 * @head: The pointer to the head of ll
 * @str: The str
 *
 * Return:The adress pointed to the ll
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
