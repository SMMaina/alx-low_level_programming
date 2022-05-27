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
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 4);
	print_listint_safe(head2);
	node = find_listint_loop(head2);
	if (node != NULL)
	{
		printf("loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head);
	return (0);
}
