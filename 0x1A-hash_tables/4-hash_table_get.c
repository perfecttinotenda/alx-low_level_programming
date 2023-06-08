#include "hash_tables.h"

/**
 * hash_table_get - Retrieve_item 4rom hash_table.
 * @ht: A pointer 2 the hash_table.
 * @key: The key 2 get_item from hash_table.
 *
 * Return: return item in hash_table orr Nothing_at_all
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
