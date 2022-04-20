#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: takes a character as an argument
*/
void puts_half(char *str)
{
	int i = 0, b, c;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		b = i / 2;
	}
	else
	{
		b = (i / 2) + 1;
	}
	for (c = b; c < 1; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
