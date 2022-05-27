#include "lists.h"

/**
 * find_listint_loop - finds loop in a a linked list
 * @head: ptr to list head
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	a = b = head;
	while (a && b && b->next)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			a = head;
			break;
		}
	}
	if (!a || !b || !b->next)
		return (NULL);
	while (a != b)
	{
		a = a->next;
		b = b->next;
	}
	return (b);
}
