#include "hash_tables.h"

/**
 * key_index - Hash function
 * @key: the key of an item
 * @size: the size of the hash table
 *
 * Return: the index of the item
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
