#include "lists.h"

/**
 * _strlen - returns string length
 * @s: string s
 * Return: string length
 */

int _strlen(char *s)
{
	char *n = s;

	while (*s)
		s++;
	return (s - n);
}
/**
 * add_node - adds a new node at beginning of the linked list
 * @head: pointer to head of linked list
 * @str: string to be added to new node
 * Return: address of new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *newstring;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	newstring = strdup(str);
	if (!newstring)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(newstring);
	new->str = newstring;
	new->next = *head;
	*head = new;
	return (*head);
}
