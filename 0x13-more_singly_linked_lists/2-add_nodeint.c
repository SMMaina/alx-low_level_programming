#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of list;
 * @head: double pointet to list head
 * @n: integer to be added
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
