#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: theowner of the dog
 * @d: pointer to store the adress of the dog object
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
