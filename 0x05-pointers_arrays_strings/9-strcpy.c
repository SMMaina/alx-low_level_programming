#include "main.h"
/**
 * _strcpy - copies function pointed to by src
 * including the terminating null byte
 * @dest: A pointer to destination of the string
 * @src: A pointer to source string to copy from
 * Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
