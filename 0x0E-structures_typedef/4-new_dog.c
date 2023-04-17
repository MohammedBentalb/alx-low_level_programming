#include "dog.h"
#include <stdlib>
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
	int i, j;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	p->name = malloc((strlen(name) + 1) * sizeof(p->name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < strlen(name); i++)
	{
		p->name[i] = name[i];
	}
	p->name[i] = '\0';


	p->owner = malloc((strlen(owner) + 1) * sizeof(p->owner));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	for (j = 0; j < strlen(p->owner); j++)
	{
		p->owner[j] = owner[j];
	}
	p->owner[j] = '\0';

	return (p);
}
