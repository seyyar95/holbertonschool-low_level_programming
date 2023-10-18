#include "main.h"

/**
 * _abs - Entry point
 * @n: int
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
