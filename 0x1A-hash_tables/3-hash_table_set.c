#include "hash_tables.h"
/**
 * hash_table_set - Add an item into the hash table
 * @ht: The hash table
 * @key: The key of the item
 * @value: The value of the item
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int index;
	hash_node_t *head;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (index)
	{
		if (ht->array[index] == NULL)
		{
			ht->array[index] = node;
		}
		else
		{
			head = ht->array[index];

			while (head->next != NULL)
			{
				head = head->next;
			}

			head->next = node;
		}
	}
	return (1);
}
