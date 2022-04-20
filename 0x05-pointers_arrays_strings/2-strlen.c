#include "main.h"
/**
 * _strlen - function used to print the length of string variable
 * @s: the character argument
 * Return: int
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
