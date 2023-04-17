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
	int l1 = 0, l2 = 0;
	int i, j;
	dog_t *p;

	while (name[l1] != '\0')
		l1++;
	while (owner[l2] != '\0')
		l2++;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = malloc(l1 * sizeof(char));
	if (p->name == NULL)
	{
		free(p->name);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p->name[i] = name[i];
	}
	p->age = age;
	p->owner = malloc(l2 * sizeof(char));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (j = 0; j < l2; j++)
	{
		p->owner[j] = owner[j];
	}
	return (p);
}
