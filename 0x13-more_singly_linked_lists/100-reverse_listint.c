#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double ptr to head
 * Return: list head address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextd = NULL, *temp = NULL, *cur = *head;

	if (!head || !(*head))
		return (*head);

	nextd = cur->next;
	cur->next = NULL;

	while (nextd)
	{
		temp = nextd->next;
		nextd->next = cur;
		cur = nextd;
		nextd = temp;
	}
	*head = cur;

	return (*head);
}
