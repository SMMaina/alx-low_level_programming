#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: double ptr var
 * @n: data to add
 * Return: no of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = NULL, *last = NULL;

	end = malloc(sizeof(dlistint_t));

	if (end)
	{
		end->n = n;
		end->next = NULL;
		if (!*head)
		{
			end->prev =  NULL;
			*head = end;
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;
			end->prev = last;
			last->next = end;
		}
		return (end);
	}
	return (NULL);
}
