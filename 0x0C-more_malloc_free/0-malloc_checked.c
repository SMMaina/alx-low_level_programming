#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
