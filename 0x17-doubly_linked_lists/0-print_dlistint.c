#include "lists.h"

/**
 * print_dlistint - Prints elements of a doubly ll
 * @h: The head od the doubly ll
 *
 * Return: The number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;
	const dlistint_t *head;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		nb++;
		head = head->next;
	}

	return (nb);
}
