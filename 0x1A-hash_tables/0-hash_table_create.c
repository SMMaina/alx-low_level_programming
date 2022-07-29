#include "hash_tables.h"

/**
 * hash_table_create - fn that rets a ptr to newly create hashtable
 *
 * @size: size of the array
 * if anything goes wrong, the fn shoud return NULL
 * Return: ptr to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *headtable = NULL;
	unsigned long int j = 0;

	if (size > 0)
	{
		headtable = malloc(sizeof(hash_table_t));
		if (!headtable)
			return (NULL);
		headtable->size = size;
		headtable->array = malloc(size * sizeof(hash_node_t *));
		if (!headtable->array)
		{
			free(headtable);
			return (NULL);
		}
		for (j = 0; j < size; j++)
			headtable->array[j] = NULL;

		return (headtable);
	}
	return (NULL);
}
