#include "search_algos.h"

/**
 * linear_search - search for a number
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the number to search
 * Return: the index of the number
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
