#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node
 * @head: ptr variable
 * @index: index of node
 * Return: 1 upon success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *nodeidx = *head, *trav = NULL;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = nodeidx->next;
		if (nodeidx->next)
			nodeidx->next->prev = NULL;
		free(nodeidx);
		return (1);
	}
	for (i = 0; nodeidx && i < index - 1; i++)
		nodeidx = nodeidx->next;

	if (nodeidx == NULL || nodeidx->next == NULL)
		return (-1);

	trav = nodeidx->next->next;
	free(nodeidx->next);
	nodeidx->next = trav;
	if (nodeidx->next)
		nodeidx->next->prev = nodeidx;

	return (1);
}
