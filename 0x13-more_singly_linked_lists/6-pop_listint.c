#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * returns the data part of the head node
 * @head: double pointer to list head
 * Return: value at head
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int del;

	if (!head || !(*head))
		return (0);
	new = *head;
	del = new->n;
	*head = (*head)->next;
	free(new);
	return (del);
}
