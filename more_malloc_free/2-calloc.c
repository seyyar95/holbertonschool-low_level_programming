#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0, nb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nb = nmemb * size;
	array = malloc(nb);

	if (arry)
	{
		while (i < nb)
		{
			arry[i] = 0;
			i++;
		}

		return (arry);
	}

	free(arry);
	return (NULL);
}
