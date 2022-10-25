#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: pointer to the linked list
 * Return: node
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *x = h;
	int i = 0;

	while (x != NULL)
	{
		i++;
		x = x->next;
	}

	return (i);
}
