#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * new_dog - Function that creates a new dog
 * @name: the name
 * @age:the age
 * @owner: the owner
 * Return: pointer
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, j;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->name = malloc(strlen(name) * sizeof(char));
	if (p->name == NULL)
	{
		free(p->name);
		return (NULL);
	}

	for (i = 0; i <= strlen(name); i++)
	{
		p->name[i] = name[i];
	}


	p->age = age;

	p->owner = malloc(strlen(owner) * sizeof(char));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (j = 0; j <= strlen(owner); j++)
	{
		p->owner[j] = owner[j];
	}
	return (p);
}
