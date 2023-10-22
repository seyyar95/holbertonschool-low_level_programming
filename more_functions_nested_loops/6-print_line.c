#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the character _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	for (; n > 0; n++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
}
