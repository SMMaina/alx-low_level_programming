#include "main.h"
/**
 * print_rev - function to print string in reverse
 * @s: defined parameter
*/
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	while (a)
	{
		_putchar(s[--a]);
	}
	_putchar('\n');
}
