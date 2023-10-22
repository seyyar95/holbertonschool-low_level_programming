#include "main.h"
/**
 * print_line - draws a diagonal line in the terminal
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
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		j = 0;

		_putchar('\\');
		_putchar('\n');
	}
}
