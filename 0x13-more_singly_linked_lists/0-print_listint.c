#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *x = h;
	size_t i = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);

		i++;
		x = x->next;
	}
	return (i);
}
