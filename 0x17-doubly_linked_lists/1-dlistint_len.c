#include "lists.h"

/**
 * dlistint_len - lenght of double linked list
 * @h: head node
 *
 * Return: lenght of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
