#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list,
 * and returns the head node’s data (n)
 * @head: pointer pointing to a pointer of the link list
 * Return: node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *newx;

	if (head == NULL || *head == NULL)
		return (0);

	newx = *head;
	*head = newx->next;
	n = newx->n;
	free(newx);
	return (n);
}
