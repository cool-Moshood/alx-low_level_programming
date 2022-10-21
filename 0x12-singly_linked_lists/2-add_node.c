#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t.
 *
 * @head: pointer
 * @str: string
 * Return: address of new head
 */


list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *s = strdup(str);
	list_t *newhead = malloc(sizeof(list_t));

	if (newhead == NULL)
		return (NULL);

	if (s == NULL)
		s = "(nil)";

	while (s[i] != '\0')
		i++;

	newhead->str = s;
	newhead->len = i;
	newhead->next = (*head);
	(*head) = newhead;

	return (newhead);
}
