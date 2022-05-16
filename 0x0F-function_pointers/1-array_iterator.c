#include "function_pointers.h"

/**
 * array_iterator - exectutes a function given as its parameter
 * @array: takes a pointer of array
 * @size: array size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array && action)
	{
		while (size--)
		{
			action(*(array++));
		}
	}
}
