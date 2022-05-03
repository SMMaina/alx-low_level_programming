#include "main.h"
#include <stdio.h>

/**
 * main - function to print the names of the arguments passed
 * @argc: number of arguments passed to the function
 * @argv: an array that holds the rguments passed
 * Return: always 0 upon success
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
