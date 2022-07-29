#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: ptr to hashtable
 * Return: val associated with element or NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *seas = NULL;
	unsigned long int ids = 0;
	int check = 0;

	if (ht)
	{
		putchar('{');
		for (ids = 0; ids < ht->size; ids++)
		{
			seas = ht->array[ids];
			while (seas)
			{
				if (check == 1)
					printf(", ");
				check = 1;
				printf(" '%s': '%s'", seas->key, seas->value);
				seas = seas->next;
			}
		}
		printf("}\n");
	}
}
