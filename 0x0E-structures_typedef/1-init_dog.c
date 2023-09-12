#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -initializes a struct dog with provided values
 * @d:pointer to the initialized struct dog
 * @name:pointer to string name of dog
 * @age:given age of dog
 * @owner:pointer to string name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
