#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - The funtion to create a new dog
 * @name: The name of the dog
 * @owner: Its owner
 * @age: Its age
 *
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog = (struct dog *)malloc(sizeof(struct dog));

	if (name == NULL || age < 0 || owner == NULL)
	{	
		free(newDog);
		return (NULL);
	}


	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = name;
	newDog->owner = owner;
	newDog->age = age;

	return (newDog);
}