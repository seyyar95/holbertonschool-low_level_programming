#include "main.h"
#include <string.h>

/**
 * puts_half -  a function that prints half of a string, followed by a new line
 *@str: string
 * strlen - counts length of string
 * Return: nothing
 */


void puts_half(char *str)
{

	int i = strlen(str);
	int start = (i - 1) / 2 + 1;
	int j;

	for (j = start; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

