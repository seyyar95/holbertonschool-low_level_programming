#include "main.h"
#include <string.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = strlen(dest);
	int srclen = strlen(src);
	int i;

	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
