#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _mem - reallocates mem for an array of ptrs
 * @list: old list to append
 * @size: size of new list
 * @new: new node to add to list
 *
 * Return: ptr to new list
 */
listint_t **_mem(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newl;
	size_t a;

	newl = malloc(sizeof(listint_t *) * size);

	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (a = 0; a < size - 1; a++)
		newl[a] = list[a];
	newl[a] = new;
	free(list);
	return (newl);
}
/**
 * free_listint_safe - frees a linked list
 * @head: double ptr to start of list
 *
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t a, n = 0;
	listint_t **list = NULL;
	listint_t *next;


	if (head == NULL || *head == NULL)
		return (n);
	while (*head != NULL)
	{
		for (a = 0; a < n; a++)
		{
			if (*head == list[a])
			{
				*head = NULL;
				free(list);
				return (n);
			}
		}
		n++;
		list = _mem(list, n, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (n);
}
