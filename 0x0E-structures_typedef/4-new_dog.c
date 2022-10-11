#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0;
	int y = 0;
	int z;
	dog_t *dog1;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = malloc(sizeof(dog1->name) * x);
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		dog1->name[z] = name[z];
	dog1->age = age;
	dog1->owner = malloc(sizeof(dog1->owner) * y);
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
		dog1->owner[z] = owner[z];
	return (dog1);
}
