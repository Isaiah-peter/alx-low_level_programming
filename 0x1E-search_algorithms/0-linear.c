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
	int n = -1;

	if (array == NULL)
	{
		return (-1);
	}

	while (*array != '\0')
	{
		n += 1;
		if (*array == value)
		{
			return (n);
		}
		array++;
	}

	return (-1);
	return (size);
}
