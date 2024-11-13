#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialise a dog file
 * @name: name of dog
 * @age: age of dog
 * @owner: onwer of dog
 * @d: structure of dog
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
