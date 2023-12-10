#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - a function that converts a binary number to an unsigned int
 *
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b
 *and if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	res = 0;

	if (*b == NULL)
		return (0);

	while (*b != NULL)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			res = res * 2 + (*b - '0');
			*b++;
		}

		return (res);
	}
}
