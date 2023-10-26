#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenates
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
