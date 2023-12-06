#include "main.h"
/**
 * _isupper - a function checks for uppercase character
 * @c: int
 * Return: return 1 if c is uppercase return 0 otherwise
 */

int _isupper(int c)
{
	int ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
