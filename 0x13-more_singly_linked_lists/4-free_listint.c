#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer to the link list
 * Return:
 */

void free_listint(listint_t *head)
{
	listint_t *newnode = NULL;

	while (head != NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode);
	}
}
