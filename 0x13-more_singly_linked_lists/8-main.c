#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	listint_t *head;
	int sum;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 3);
	sum = sum_listint(head);
	printf("sum = %d\n", sum);
	free_listint2(&head);
	return (0);
}
