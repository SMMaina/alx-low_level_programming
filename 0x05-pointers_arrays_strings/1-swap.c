#include "main.h"
/**
 * swap_int - function that swaps the value of a and b
 * @a: the first defined variable
 * @b: the second defined variable
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
