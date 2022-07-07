#include "lists.h"

/**
 * dlistint_len - return number of elements in a linked list
 * @h: head variable
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
