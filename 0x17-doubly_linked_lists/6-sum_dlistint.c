#include "lists.h"

/**
 * sum_dlistint - sums numbers in a linkedlist
 * @head: list head
 *
 * Return: sum of numbers in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}

	return (sum);
}
