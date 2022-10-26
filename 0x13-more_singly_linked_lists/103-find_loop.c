#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to head node
 *
 * Return: null if no loop/pointer to start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *goat = head, *tiger = head;

	while (goat && tiger && tiger->next)
	{
		goat = goat->next;
		tiger = tiger->next->next;

		if (goat == tiger)
		{
			goat = head;
			while (goat != tiger)
			{
				goat = goat->next;
				tiger = tiger->next;
			}
			return (tiger);
		}
	}

	return (NULL);
}

