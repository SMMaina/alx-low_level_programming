#include "main.h"
/**
 * _strncat - cocantenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied from source string
 * Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
