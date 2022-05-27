#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 98);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 0);
	add_nodeint(&head, 2);
	add_nodeint(&head, 98);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	print_listint_safe(head);
	return (0);
}
