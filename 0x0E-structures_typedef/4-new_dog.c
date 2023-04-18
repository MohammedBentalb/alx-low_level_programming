#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - Function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j = 0;
	int counter;
	dog_t *dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(i * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (counter = 0; counter <= i; m++)
	{
		dog->name[counter] = name[counter];
	}
	dog->owner = malloc(j * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (counter = 0; counter <= j; m++)
		dog->owner[counter] = owner[counter];
	 dog->age = age;
	return (dog);
}
