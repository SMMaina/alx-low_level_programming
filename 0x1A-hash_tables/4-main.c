#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check code
 *
 * Return: always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");

	value = hash_table_get(ht, "python");
	printf("%s:%s\n", "python", value);
	return (EXIT_SUCCESS);
}
