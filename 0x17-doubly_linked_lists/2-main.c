#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0 on success
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint(&head, 0);
	add_dnodeint(&head, 1);
	add_dnodeint(&head, 12);
	print_dlistint(head);
	return (EXIT_SUCCESS);
}
