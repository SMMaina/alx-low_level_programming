#include "lists.h"

/**
 * sum_listint - retirns sum of all the data part of the nodes
 * @head: pointer to list head
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *new;

	register int add = 0;

	if (!head)
		return (0);
	new = head;
	while (new)
	{
		add += new->n;
		new = new->next;
	}
	return (add);
}
