#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - prints an array of string
 * @tab: array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 * main - check the code
 *
 * Return: i if an eoor occurs 0 upon success
 */
int main(void)
{
	char **tab;

	tab = strtow("		Holberton school		#cisfun");
	if (tab == NULL)
	{
		printf("failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
