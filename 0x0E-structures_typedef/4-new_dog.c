#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Function that creates a new dog
 * @name: the name
 * @age:the age
 * @owner: the owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int l1 = 0, l2 = 0;
	int i, j;

	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = malloc((l1 + 1) * sizeof(char));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		p->name[i] = name[i];
	}
	p->name[i] = '\0';
	p->owner = malloc((1 + l2) * sizeof(char));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		p->owner[j] = owner[j];
	}
	p->owner[i] = '\0';
	p->age = age;
	return (p);
}
