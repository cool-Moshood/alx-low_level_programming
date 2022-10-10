#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable
 *
 * @d: pointer to struct dog
 * @name:  dog name
 * @age:   dog age
 * @owner: dog 0wner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
