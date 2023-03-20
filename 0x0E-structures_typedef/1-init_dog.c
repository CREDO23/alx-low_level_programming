#include "dog.h"

/**
 * init_dog - The init dog funtion
 * @d: The dog arg
 * @name: The name
 * @age: The age
 * @owner: The owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
