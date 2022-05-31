#include "main.h"
/**
 * set_bit - sets value of bit to 1 at a given index
 * @n: number to set
 * @index: index to set the bit
 * Return: 1 upon success
 *  -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setter = 1 << index;
	*n = *n | setter;
	return (-1);
}
