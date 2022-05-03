#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - checks for coins
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0 upon success
 */

int main(int argc, char *argv[])
{
	int change, i, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
	{
		printf("0\n");
	}
	change = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (change == 0)
		{
			break;
		}
		if (coins[i] <= change)
		{
			change -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
