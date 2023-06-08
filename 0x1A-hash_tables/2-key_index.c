#include "hash_tables.h"

/**
 * key_index - key_index of the current_item
 * @key: The key 2 get_index_of
 * @size: Kukura kwe array item_hash table.
 *
 * Return: The index_key.
 *
 * Description: Uses the djb2_algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
