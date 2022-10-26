#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a linked list
 * @head: pointer pointing to a pointer to the linked list
 * @index: index to delete
 *
 * Return: 1 if successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newx = *head;
	listint_t *newx1;
	unsigned int i = 0, size = 0;

	while (newx != NULL)
	{
		size++;
		newx = newx->next;
	}

	if (*head == NULL || index > size - 1)
		return (-1);

	if (index == 0)
	{
		newx = *head;
		*head = (*head)->next;
		free(newx);
		return (1);
	}

	newx = *head;

	for (i = 0; i < index - 1; i++)
		newx = newx->next;

	newx1 = newx->next;
	newx->next = newx1->next;

	free(newx1);

	return (1);
}
