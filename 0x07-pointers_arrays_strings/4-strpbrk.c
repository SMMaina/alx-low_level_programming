#include "main.h"
/**
 * _strpbrk - a function that locates the first occurrence of bytes in a string
 * @s: scans the string
 * @accept: looks for particular set of bytes
 * Return: pointer to the character occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
