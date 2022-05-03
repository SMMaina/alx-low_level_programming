#include "main.h"
#include <stdio.h>

/**
 * main - a function to print the program's name
 * @argc: number of arguments to be passed to the function
 * @argv: an array that holds the arguments passed
 * Return: Success always(0)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
