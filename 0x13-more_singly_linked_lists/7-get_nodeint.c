#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer that points to link list
 * @index:  node
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (0);
	while ((i < index) && head != NULL)
	{

		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (NULL);
}
