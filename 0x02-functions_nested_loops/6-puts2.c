#include "main.h"
/**
 * puts2 - functions that prints every other characater in string
 * @str: defined parameter
*/

void puts2(char *str)
{
	int a = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;
	for (; a <= len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
