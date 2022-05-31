#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string having the bin number
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int dec = 0;
	int count;

	if (!b)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '\0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		dec *= 2;
		if (b[count] == '1')
			dec += 1;
	}
	return (dec);
}
