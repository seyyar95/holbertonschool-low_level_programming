#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet but x10
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
