#include "lists.h"

size_t check_looped_list_len(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique ndes.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * otherwise - the number of unique ndes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *h, *hh;
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

			h = h->next;
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
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t ndes, idx;

	ndes = check_looped_list_len(*h);

	if (ndes == 0)
	{
		for (; h != NULL && *h != NULL; ndes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (idx = 0; idx < ndes; idx++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (ndes);
}
