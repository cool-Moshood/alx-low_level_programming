#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer pointing to a pointer to the linked list
 * @n: data to add at start
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *currentnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		currentnode = *head;
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
		currentnode->next = newnode;
	}
	return (newnode);
}
