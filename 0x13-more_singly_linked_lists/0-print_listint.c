#include "lists.h"

/**
 * print_listint - The function to print
 * @h: THe head of the ll
 *
 * Return: The length of the ll
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	const listint_t *ll = h;

	if (ll != NULL)
	{

		while (ll != NULL)
		{
			printf("%i\n", ll->n);

			ll = ll->next;
			i++;
		}
	}

	return (i);
}
