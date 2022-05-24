#include "lists.h"
/**
 * _strlen - string length
 * @s: string s
 * Return: string length
 */
int _strlen(char *s)
{
	char *last = s;

	while (*s)
		s++;
	return (s - last);
}
/**
 * add_node_end - adds a new node at end of a list_t list;
 * @head: reference to head of list
 * @str: string to be added to linked list
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
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
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (last);
}
