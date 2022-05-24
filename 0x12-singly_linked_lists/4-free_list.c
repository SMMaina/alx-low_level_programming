#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *now = head;
	list_t *next;

	while (now)
	{
		next = now->next;
		free(now->str);
		free(now);
		now = next;
	}
	head = NULL;
}
