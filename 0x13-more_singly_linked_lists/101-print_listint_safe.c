#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - performs memo allocation for an array of pointers
 * @list: old list
 * @size: new list size
 * @new: new node
 * Return: ptr to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newl;
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
 * print_listint_safe - prints a list
 * @head: ptr to list head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (n);
			}
		}
		n++;
		list = _r(list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (n);
}
