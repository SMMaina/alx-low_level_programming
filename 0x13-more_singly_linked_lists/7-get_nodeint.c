#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to list head
 * @index: index of the value of return
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;

	register uint i = 0;

	new = head;
	while (new)
	{
		if (i == index)
			return (new);
		i++;
		new = new->next;
	}
	return (new);
}
