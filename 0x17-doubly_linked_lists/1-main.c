#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 * Return: 0 upon success
 */
int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {3, NULL, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "error: can't malloc\n");
		return (EXIT_FAILURE);
	}
	new->n = 8;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	head = new;
	n = dlistint_len(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (EXIT_SUCCESS);
}
