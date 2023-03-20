#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog struct
 * @name: The name of the dog
 * @age: Its age
 * @owner: The person whose belongs to
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
