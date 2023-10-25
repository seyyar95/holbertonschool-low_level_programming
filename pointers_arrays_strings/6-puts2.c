#include "main.h"
/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
