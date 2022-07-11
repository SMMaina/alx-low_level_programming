#include "main.h"

/**

 * _puts - function that prints out a string

 * @str: defined character parameter

*/

void _puts(char *str)

{

	int a = 0;



	while (str[a] != '\0')

	{

		_putchar(str[a]);

		a++;

	}

	_putchar('\n');

}