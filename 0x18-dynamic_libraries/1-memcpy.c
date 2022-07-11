#include "main.h"

/**

 * _memcpy - copies charcaters to a destination string

 * @dest: a pointer pointing to a destination string

 * @src: a pointer pointing to a source string

 * @n: number of integers to be copied

 * Return: a pointer to dest string

 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

	int i = 0, size = n;



	while (i < size)

	{

		dest[i] = src[i];

		i++;

	}

	return (dest);

}