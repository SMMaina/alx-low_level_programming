#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * main - check code
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	char *key;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	key = strdup("tim");
	value = strdup("bark");
	hash_table_set(ht, key, value);
	key[0] = '\0';
	value[0] = '\0';
	free(key);
	free(value);
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
