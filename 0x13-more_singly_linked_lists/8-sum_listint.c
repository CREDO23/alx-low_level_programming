#include "lists.h"

/**
 * sum_listint - The function
 * @head: THe head of the ll
 *
 * Return: The sum of data in each node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;

		tmp = tmp->next;
	}

	return (sum);
}
