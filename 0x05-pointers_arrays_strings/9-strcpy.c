#include "main.h"
/**
 * _strcpy - copies function pointed to by src
 * including the terminating null byte
 * @dest: a pointer to destination of the string
 * @src: a pointer to source string to copy from
 * Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (a);
}
