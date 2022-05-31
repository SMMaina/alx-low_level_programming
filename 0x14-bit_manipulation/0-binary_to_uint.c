#include "main.h"
/**
 * powN - raises b to a
 * @b: base
 * @a: power
 * Return: power of a to b
 */
int powN(int b, int a)
{
	int res = 1;

	while (a > 0)
	{
		res *= b;
		a--;
	}
	return (res);
}
/**
 * stringlen - string length
 * @s: string
 * Return: string length
 */
int stringlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * binary_to_uint - converts a binary number to an usigned int
 * @b: input string
 * Return: result from conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int pw;
	int d = 0;

	if (!b)
		return (0);
	pw = stringlen(b) - 1;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			d += powN(2, pw);
		b++;
		pw--;
	}
	return (d);
}
