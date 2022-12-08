#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: node head
 * @index: node index
 *
 * Return: node at given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *temp = head;

	if (index <= 0 || head == NULL)
		return (head);

	for (x = 1; x <= index; x++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	return (temp);
}
