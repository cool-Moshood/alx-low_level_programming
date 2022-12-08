#include "lists.h"

/**
 * distint_len - lenght of double linked list
 * @h: head node
 *
 * Return: lenght of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return count;
}
