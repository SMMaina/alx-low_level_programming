#include "lists.h"

/**
 * add_dnodeint - addas a node at beginning of list
 * @head: double linked var
 * @newdata: data to add
 * Return: no of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int newdata)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode)
	{
		newnode->n = newdata;
		newnode->prev = NULL;
		if (!*head)
			newnode->next = NULL;
		else
		{
			newnode->next = *head;
			(*head)->prev = newnode;
		}
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}
