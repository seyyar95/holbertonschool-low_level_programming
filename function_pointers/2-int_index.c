#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: array to search in
 * @size: number of elements in the array
 * @cmp: is a pointer to the function
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0. -1 if no element matches and if size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
