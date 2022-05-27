#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - chech code
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
	add_nodeint(&head2, 3);
	add_nodeint(&head, 98);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	free_listint_safe(&head2);
	printf("%p, %p\n", (void *)head2, (void *)head);
	return (0);
}
