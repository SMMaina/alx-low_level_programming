#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: 0 upon success
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("little");
	}
	else
	{
		printf("big");
	}
	return (0);
}
