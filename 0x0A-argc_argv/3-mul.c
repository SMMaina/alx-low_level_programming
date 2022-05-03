#include "stdlib.h"
#include <stdio.h>

/**
 * main - a function that prints the multiplication of numbers
 * @argc: number of arguments passed to the function
 * @argv: an array holding the arguments
 * Return: always 0 upon success
 */
int main(int argc, char *argv[])
{
	int i, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = 1;
	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
