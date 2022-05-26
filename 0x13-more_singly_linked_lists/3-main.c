#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: akways 0
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	print_listint(head);
	return (0);
}
