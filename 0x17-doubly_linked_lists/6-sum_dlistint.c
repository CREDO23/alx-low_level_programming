#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data in a ddl
 * @head: The head of the dll
 *
 * Return: The SUM
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
