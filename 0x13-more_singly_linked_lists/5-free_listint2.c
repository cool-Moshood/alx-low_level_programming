#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the link list
 * Return:
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		newnode = *head;
		*head = newnode->next;
		free(newnode);
	}
}
