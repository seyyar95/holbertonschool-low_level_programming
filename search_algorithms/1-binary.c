#include "search_algos.h"

/**
 * binary_search -  a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located,
 * -1 if array is not present
 */




int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;


	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high  = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
