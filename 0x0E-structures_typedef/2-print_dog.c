#include <stdio.h>
#include "dog.h"


/**
 * print_dog - Function that prints a struct dog
 *@d: pointer
 *
 *
 */


void print_dog(struct dog *d)
{
	if (d == null)
		;
	else
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		if (d->age == NULL)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}
		if (s->owner == NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nill)\n");
		}
	}




}
