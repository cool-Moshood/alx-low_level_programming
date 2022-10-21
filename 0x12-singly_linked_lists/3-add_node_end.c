#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t.
 *
 * @head: pointer
 * @str: string
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int size = 0;
	char *s = strdup(str);
	list_t *current;
	list_t *newhead;

	if (s == NULL)
		return (NULL);

	while (s[size] != '\0')
		size++;

	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
		return (NULL);

	newhead->len = size;
	newhead->str = s;

	if (*head == NULL)
	{
		*head = newhead;
		return (newhead);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newhead;
	return (newhead);
}
