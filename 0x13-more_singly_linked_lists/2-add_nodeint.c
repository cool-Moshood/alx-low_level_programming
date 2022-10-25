#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: pointer pointing to a pointer to the linked list
 * @n: data to add at start
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newx;

	newx = malloc(sizeof(listint_t));

	if (newx == NULL)
		return (NULL);

	newx->n = n;
	newx->next = *head;
	*head = newx;

	return (newx);
}
