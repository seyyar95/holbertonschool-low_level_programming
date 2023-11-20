#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
