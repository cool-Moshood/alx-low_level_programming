#include "lists.h"

/**
 * free_list - function that frees a list_t
 *
 * @head: pointer
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *newhead = NULL;

	while (current != NULL)
	{
		newhead = current;
		current = current->next;
		free(newhead->str);
		free(newhead);
	}
}
