#include "main.h"

/**
 * _strncpy - copies source string to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy to dest
 * Return: a pointer to th destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
