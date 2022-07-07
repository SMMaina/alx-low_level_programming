#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: ptr var
 * @n: new data
 * @idx: position
 * Return: 0 upon success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nodeidx = NULL, *trav = *h;
	unsigned int i = 0;

	nodeidx = malloc(sizeof(dlistint_t));
	if (!nodeidx || (!trav && idx != 0))
	{
		if (nodeidx)
			free(nodeidx);
		return (NULL);
	}
	nodeidx->n = n;
	if (idx == 0)
	{
		if (!trav)
			nodeidx->next = NULL;
		else
		{
			nodeidx->next = trav, trav->prev = nodeidx;
		}
		nodeidx->prev = NULL, *h = nodeidx;
		return (nodeidx);
	}
	for (; i < (idx - 1); i++)
	{
		if (!trav)
		{
			free(nodeidx);
			return (NULL);
		}
		trav = trav->next;
	}
	nodeidx->next = trav->next, nodeidx->prev = trav;
	if (trav->next)
		trav->next->prev = nodeidx;
	trav->next = nodeidx;
	return (nodeidx);
}
