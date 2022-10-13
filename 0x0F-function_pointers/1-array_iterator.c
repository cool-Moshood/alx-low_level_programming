#include "function_pointers.h"

/**
 * array_iterator - function that prints an integer
 *
 * @array: pointer
 * @action: pointer to the function
 * @size:  size of the array
 *
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array || size || action)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
