#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: ending int
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int length, i;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (i = 0; i < length; i++)
		ptr[i] = min++;
	return (ptr);
}

