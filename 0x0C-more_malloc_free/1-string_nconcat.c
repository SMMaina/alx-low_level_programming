#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function to combine two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied to s1
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size, length1, length2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n > length2)
		n = length2;
	size = length1 + n;
	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);
	for (i = 0; i < length1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i] = s2[j];
	ptr[i] = 0;
	return (ptr);
}


