#include "main.h"
/**
 * _puts_recursion - a function that prints out a string
 * @s: the pointer to a string
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if ((s[i]) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar((s[i]));
	_puts_recursion(s + 1);
}
