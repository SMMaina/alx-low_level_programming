#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: first int
 * @b: second int
 * Return: diff of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the module
 * @a: first int
 * @b: second int
 * Return: module of a
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
