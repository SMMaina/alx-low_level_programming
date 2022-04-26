#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a character
 * @s: first argument of pointer
 * @to: character to allocate as value of pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
