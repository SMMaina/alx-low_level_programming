#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: ptr to hash table
 * deletes a hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *seas = NULL, *freed = NULL;
	unsigned long int idx = 0;

	if (ht && ht->array)
	{
		while (idx < ht->size)
		{
			seas = ht->array[idx];
			while (seas)
			{
				freed = seas->next;
				free(seas->key);
				free(seas->value);
				free(seas);
				seas = freed;
			}
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}
