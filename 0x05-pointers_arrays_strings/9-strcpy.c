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
	char *a = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest++ = '\0';
	}
	return (a);
}
