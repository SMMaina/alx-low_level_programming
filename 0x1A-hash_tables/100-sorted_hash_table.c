#include "hash_tables.h"

/**
 * shash_table_create - rets a ptr to newly created hash table
 *
 * @size: size of array
 * rets a ptr to newly created hashtable
 * else return Null
 * Return: ptr to newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *headtable = NULL;
	unsigned long int i = 0;

	if (size > 0)
	{
		headtable = malloc(sizeof(shash_table_t));
		if (!headtable)
			return (NULL);
		headtable->size = size;
		headtable->array = malloc(size * sizeof(shash_node_t *));
		if (!headtable->array)
		{
			free(headtable);
			return (NULL);
		}

		headtable->shead = NULL, headtable->stail = NULL;

		for (i = 0; i < size; i++)
			headtable->array[i] = NULL;

		return (headtable);
	}
	return (NULL);
}

/**
 * add_node_dll - adds a new node to a doubly linked list
 * @ht: ptr to hash table
 * @key_node: ptr to new node
 * Return: void
 */
void add_node_dll(shash_table_t *ht, shash_node_t *key_node)
{
	shash_node_t *temp = NULL;

	if (!ht->shead && !ht->stail)
	{
		key_node->sprev = NULL, key_node->snext = NULL;
		ht->shead = key_node, ht->stail = key_node;
		return;
	}

	for (temp = ht->shead; temp; temp = temp->next)
	{
		if (strcmp(key_node->key, temp->key) < 0)
		{
			key_node->snext = temp;
			key_node->sprev = temp->sprev;
			temp->sprev = key_node;
			if (key_node->sprev)
				key_node->sprev->snext = key_node;
			else
				ht->shead = key_node;
			return;
		}
	}
	key_node->sprev = ht->stail;
	ht->stail->snext = key_node, ht->stail = key_node;
	key_node->snext = NULL;
}

/**
 * shash_table_set - gives the index of key
 * @ht: ptr to hash table
 * @key: string, data to feed
 * @value: value corresponding to key
 * Return: 1 upon success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *key_node = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			idx = key_index((unsigned char *)key, ht->size);
		else
			return (0);

		tmp = ht->array[idx];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);

			}
			tmp = tmp->next;
		}

		key_node = malloc(sizeof(shash_node_t));
		if (!key_node)
			return (0);
		key_node->key = strdup(key);
		key_node->value = strdup(value);
		key_node->next = ht->array[idx];
		ht->array[idx] = key_node;

		add_node_dll(ht, key_node);

		return (1);
	}
	return (0);
}

/**
 * shash_table_get - retrieves a val associated witha key
 * @ht: ptr to hash table
 * @key: string, data to feed
 * Return: returns value associated with element or Null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
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

/**
 * shash_table_print - prints hash table
 * @ht: ptr to hashtable
 * Return: rets value associated with elem
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	unsigned long int idx = 0;
	int check = 0;

	if (ht)
	{
		putchar('{');
		for (idx = 0; idx < ht->size; idx++)
		{
			temp = ht->array[idx];
			while (temp)
			{
				if (check == 1)
					printf(", ");
				check = 1;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints hash table
 * @ht: ptr to hash table
 * Return: value associated with elem
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int check = 0;

	if (ht)
	{
		putchar('{');
		for (temp = ht->stail; temp; temp = temp->sprev)
		{
			if (check == 1)
				printf(", ");
			check = 1;
			printf("'%s': '%s'", temp->key, temp->value);
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hashtable
 * @ht: ptr to hash table
 * Return: Void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *freed = NULL;
	unsigned long int idx = 0;


	if (ht && ht->array)
	{
		while (idx < ht->size)
		{
			temp = ht->array[idx];
			while (temp)
			{
				freed = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = freed;
			}
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}

