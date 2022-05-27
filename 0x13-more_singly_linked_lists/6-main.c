#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	int n;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 98);
	print_listint(head);
	n = pop_listint(&head);
	printf("%d\n", n);
	print_listint(head);
	n = pop_listint(&head);
	printf("%d\n", n);
	free_listint2(&head);
	printf("%p\n", (void *)head);
	return (0);
}
