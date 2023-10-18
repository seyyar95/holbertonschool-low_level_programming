#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is letter 0 otherwise
 */

int _isalpha(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
		return (0);
}
