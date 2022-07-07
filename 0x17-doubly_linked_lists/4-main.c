#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0 on success
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 34);
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
