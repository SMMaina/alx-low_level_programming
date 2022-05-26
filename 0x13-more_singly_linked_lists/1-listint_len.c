#include "lists.h"

/**
 * listint_len - returns the number of elemts in a linked list
 * @h: pointer to list head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
