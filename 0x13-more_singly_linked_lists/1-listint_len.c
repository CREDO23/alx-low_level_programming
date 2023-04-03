#include "lists.h"

/**
 * listint_len - THe function to print the length
 * @h: The head of the ll
 *
 * Return: The number of nodes int the ll
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	const listint_t *ll = h;

	if (ll != NULL)
	{
		while (ll)
		{
			i++;
			ll = ll->next;
		}
	}

	return (i);
}
