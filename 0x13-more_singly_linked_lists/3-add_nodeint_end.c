#include "lists.h"

/**
 * add_nodeint_end - adds new line at end of linked list
 * @head: double pointer to list head
 * @n: integer to be printed
 * Return: address of first node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
