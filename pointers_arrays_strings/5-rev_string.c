#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string
 * strlen - counts length of string
 * Return: nothing
 */

void rev_string(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;
	int temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
