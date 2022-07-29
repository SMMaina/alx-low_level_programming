#include "hash_tables.h"
/**
 * key_index - gives you index of key
 * @size: size of array
 * @key: data bo check its index
 * rets the index at whick key/value shoudl be stored
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	if (size > 0)
		idx = hash_djb2(key) % size;

	return (idx);
}
