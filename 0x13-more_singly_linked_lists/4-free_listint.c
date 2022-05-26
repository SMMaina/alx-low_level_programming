#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: ptr to list head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
