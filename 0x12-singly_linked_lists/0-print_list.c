#include "lists.h"

/**
 * print_list - The funtion to print a linked list
 * @h: The linked list to be printed
 *
 * Return: The amount of node
 */
size_t print_list(const list_t *h)
{
	 int nb_nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		nb_nodes++;

		h = h->next;
	}
	return (nb_nodes);
}
