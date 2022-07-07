#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node
 * @head: ptr var
 * @index: data to add
 * Return: 0 on success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *indexnd = head;
	unsigned int i = 0;

	if (head)
	{
		while (indexnd)
		{
			if (i == index)
				return (indexnd);
			i++;
			indexnd = indexnd->next;
		}
	}
	return (NULL);
}
