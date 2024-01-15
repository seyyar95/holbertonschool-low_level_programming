#include "search_algos.h"

/**
 * linear_search - a function that searches for a value
 * in an array of integers using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index of searched value.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
