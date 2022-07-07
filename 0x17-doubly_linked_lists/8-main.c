#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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
	add_dnodeint_end(&head, 34);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	return (0);
}
