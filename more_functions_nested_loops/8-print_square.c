#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 *
 *@size: size is the size of the square
 *
 * Return: nothing
 *
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; i < size; i++)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		j = 0;

		_putchar('\n');
	}

}
