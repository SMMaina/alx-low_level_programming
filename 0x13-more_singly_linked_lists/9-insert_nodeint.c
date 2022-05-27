#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node where directed
 * @head: double ptr to list head
 * @idx: index of node to be insrted
 * @n: value of new node
 * Return: ptr to indexed noded
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (count = 0; count < idx - 1 && temp != NULL; count++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
