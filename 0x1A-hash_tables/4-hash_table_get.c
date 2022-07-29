#include "hash_tables.h"

/**
 * hash_table_get - terieves a val associated with a key
 * @ht: ptr to hashtable
 * @key: data to retrieve
 * res an idx at which the key/val should be stored
 * Return: value associated with element or Null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int idx = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			idx = key_index((unsigned char *)key, ht->size);
		else
			return (NULL);

		temp = ht->array[idx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}

