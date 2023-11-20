#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	
	newdog->name = strdup(name);
	newdog->owner = strdup(owner);
	newdog->age = age;

	return (newdog);
}

