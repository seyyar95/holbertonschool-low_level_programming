#include "main.h"

/**
 * print_triangle -   prints a triangle, followed by a new line
 *
 *@size: the size of the triangle
 *
 * Return: nothing
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int row = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; row <= size; row++)
	{
		i = size - row;
		j = row;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		while (j > 0)
		{
			_putchar('#');
			j--;
		}

		_putchar('\n');
	}

}
