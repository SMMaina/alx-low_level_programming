#include <stdlib.h>
#include <stdio.h>

/**
 * isinteger - a function that checks if a number is an integer
 * @s: number of srguments
 * Return: success 0 fail is 1
 */
int isinteger(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * main - a function that add numbers
 * @argc: number of arguments passed
 * @argv: an array holding the arguments
 * Return: always 0 upon success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isinteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
