#include "hash_tables.h"
/**
 * hash_table_set - gives you index of akey
 * @ht: ptr to hashtable
 * @key: data to insert
 * @value: corrs val to key
 * rest the index at which keyval paierd is stored in the array of hashtable
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *keynode = NULL, *temp = NULL;
	unsigned long int idx = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			idx = key_index((unsigned char *)key, ht->size);
		else
			return (0);

		temp = ht->array[idx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}

		keynode = malloc(sizeof(hash_node_t));
		if (!keynode)
			return (0);
		keynode->key = strdup(key);
		keynode->value = strdup(value);
		keynode->next = ht->array[idx];
		ht->array[idx] = keynode;

		return (1);
	}
	return (0);

}
