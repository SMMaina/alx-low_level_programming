#include "main.h"
#include <stdio.h>

/**
 * main - a function to print the number of arguments
 * @argc: number of arguments passed
 * @argv: an array that holds the arguments
 * Return: success always(0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
