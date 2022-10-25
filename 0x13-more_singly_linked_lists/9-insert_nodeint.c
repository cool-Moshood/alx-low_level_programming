#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: pointer pointing to a pointer to the linked list
 * @idx: index to insert
 * @n: data at index
 *
 * Return: Node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newx = *head;
	unsigned int size = 0, i = 0;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	while (newx != NULL)
	{
		size++;
		newx = newx->next;
	}

	newx = *head;
	if (idx > size)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
		newx = newx->next;

	if (newx->next == NULL)
	{
		newx->next = newnode;
		return (newnode);
	}

	newnode->next = newx->next;
	newx->next = newnode;

	return (newnode);
}
