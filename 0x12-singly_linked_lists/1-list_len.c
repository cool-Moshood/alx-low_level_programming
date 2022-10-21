#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 *
 * @h: head
 * Return: number of count of the list
 */


size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
