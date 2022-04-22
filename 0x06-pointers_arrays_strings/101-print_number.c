#include "main.h"
/**
 * print_number - prints an integer
 * only using the putchar function
 * no arrays and pointers
 * @n: integer value to be printed
 *
 * Return: void
*/
void print_number(int n)
{
	unsigned int num;
	/* checking for negative number*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	/* use recursion to print number*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
