#include "main.h"
#include "stdlib.h"

/**
 * create_array - function to print an array of characters
 * @size: parameter to define the size of the array
 * @c: parameter to define the name of the array
 * Return: upon success pointer to the array failure null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (0);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
