#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
