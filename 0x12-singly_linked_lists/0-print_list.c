#include "lists.h"

/**
 * print_list - The funtion to print a linked list
 * @h: The linked list to be printed
 *
 * Return: The amount of node
 */
size_t print_list(const list_t *h)
{
	const list_t *head;
	unsigned int nb_nodes = 0;

	head = h;

	while (head)
	{
		if (head->str)
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		nb_nodes++;

		head = head->next;
	}
	return (nb_nodes);
}
