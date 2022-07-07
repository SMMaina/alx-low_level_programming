#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
