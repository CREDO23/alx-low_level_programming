#include "lists.h"

/**
 * check_looped_list_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * otherwise - the number of unique nodes in the list.
 */
size_t check_looped_list_len(const listint_t *head)
{
	const listint_t *h, *hh;
	size_t ndes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	h = head->next;
	hh = (head->next)->next;

	while (hh)
	{
		if (h == hh)
		{
			h = head;
			while (h != hh)
			{
				ndes++;
				h = h->next;
				hh = hh->next;
			}

			h = hh->next;
			while (h != hh)
			{
				ndes++;
				h = h->next;
			}

			return (ndes);
		}
		h = h->next;
		hh = (hh->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ndes, idx = 0;

	ndes = check_looped_list_len(head);

	if (ndes == 0)
	{
		for (; head != NULL; ndes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < ndes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ndes);
}
