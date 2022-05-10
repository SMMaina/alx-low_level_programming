#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy - copies memory area
 * @dest: destination to copy
 * @src: source pointer
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block through malloc and free
 * @ptr: pointer to old size(realloc)
 * @old_size: old memory size
 * @new_size: new memory size
 * Return: pointer to reallocated memory destination or NUll
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (new);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
	{
		free(ptr);
		return (NULL);
	}


	if (new_size > old_size)
		_memcpy(new, ptr, old_size);
	free(ptr);

	return (new);
}
