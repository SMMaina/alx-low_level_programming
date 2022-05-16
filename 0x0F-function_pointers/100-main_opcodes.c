#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints opcodes of a given machine
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < size - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
