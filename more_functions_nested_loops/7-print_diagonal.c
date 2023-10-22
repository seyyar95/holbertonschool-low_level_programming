#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (; i < n; i++)
	{
		while (i < j)
		{
			_putchar(' ');
			i++;
		}

		j = 0;

		_putchar('\\');
		_putchar('\n');
	}
}
