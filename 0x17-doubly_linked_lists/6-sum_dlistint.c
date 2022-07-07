#include "lists.h"
/**
 * sum_dlistint - returns su of data part of list
 * @head: ptr to first node
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int adding = 0;

	while (head)
	{
		adding += head->n;
		head = head->next;
	}
	return (adding);
}
