#include "lists.h"
/**
 * print_listint - prints all the specifics of the linked list
 * @h: pointer to list head
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	register size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
