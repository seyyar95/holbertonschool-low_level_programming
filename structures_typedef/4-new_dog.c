#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (newdog->name == NULL ||  newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	newdog->name = strdup(name);
	newdog->owner = strdup(owner);
	newdog->age = age;

	return (newdog);
}
