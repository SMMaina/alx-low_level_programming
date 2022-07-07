#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: double ptr list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed = NULL, *empty = NULL;

	freed = head;
	while (freed)
	{
		empty = freed->next;
		free(freed);
		freed = empty;
	}
}
