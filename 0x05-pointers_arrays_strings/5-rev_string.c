#include "main.h"
/**
 * rev_string - function that reverses the string
 * @s: takes character as the argument
*/

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}
	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}
