#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double ptr to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *now;
	listint_t *temp;

	if (!head)
		return;
	now = *head;
	while (now)
	{
		temp = now;
		now = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
