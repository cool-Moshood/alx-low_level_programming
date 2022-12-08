#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index for doubly linked list
 * @head: head of node
 * @index: index to delete
 *
 * Return: -1 if unsuccessful, 1 if successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *del_node = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		else
		{
			*head = temp->next;
			temp->next->prev = NULL;
			free(temp);
			return (1);
		}
	}

	for (i = 1; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	del_node = temp->next;
	temp->next = del_node->next;
	if (del_node->next != NULL)
		del_node->next->prev = temp->next;
	free(del_node);
	return (1);
}
