#include "search_algos.h"

/**
 * interpolation_search - search algorithm
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the number to search
 * Return: the index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	while ((array[high] != array[low]) &&
	(value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			return (pos);
		}
	}

	return (-1);
}
