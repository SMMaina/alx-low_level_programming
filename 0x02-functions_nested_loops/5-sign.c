#include "main.h"

/**
 * print_sign -prints a number's sign
 * @n: Taken as a parameter
 * Return: Always (1) when number is greater than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
