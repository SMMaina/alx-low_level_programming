#include "main.h"

/**
 * _strchr - a function to find charcaters in a string
 * @s: pointer to the main string
 * @c: charcater to look for
 * Return: a pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
