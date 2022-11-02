#include "search_algos.h"
#include <math.h>

/**
 * binary_search - search a number
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the number to search
 * Return: the index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	int center = 0;
	size_t i;

	while (left <= right)
	{
		center = ceil((right + left) / 2);
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");
		if (array[center] > value)
		{
			right = center - 1;
		}
		else if (array[center] < value)
		{
			left = center + 1;
		}
		else
		{
			return (center);
		}
	}


	return (-1);
}
