#include "main.h"
/**
 *_isdigit - a function that checks for a digit
 *@c: int
 *Return: if c is digit return 1 otherwise return 0
 */
int _isdigit(int c)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit == c)
		{
			return (1);
		}
	}
	return (0);
}
