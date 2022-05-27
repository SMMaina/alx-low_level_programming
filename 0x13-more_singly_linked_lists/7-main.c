#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	listint_t *node;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 98);
	print_listint(head);
	node = get_nodeint_at_index(head, 5);
	printf("%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
