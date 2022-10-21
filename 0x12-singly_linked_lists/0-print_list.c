#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_tlist
 *
 * @h: head
 * Return: number of count of the list
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	while (current != NULL)

		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			current = current->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
			current = current->next;
			count++;

		}
	return (count);
}
