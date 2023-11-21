#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
