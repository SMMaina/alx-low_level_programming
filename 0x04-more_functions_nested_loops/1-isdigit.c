#include "main.h"
/**
 * _isdigit.c - checks for digit
 * @c: defined parameter
 * Return: Always 1 after success
*/

int _isdigit(int c);
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
