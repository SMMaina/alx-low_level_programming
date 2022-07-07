#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 34);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 5);
	printf("%d\n", node->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
