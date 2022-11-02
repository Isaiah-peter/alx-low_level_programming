#include "search_algos.h"
#include <math.h>
/**
 * jump_search - search algorithm
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the number to search
 * Return: the index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	size_t blockSize = sqrt(size);
	size_t start = 0;
	size_t end = blockSize;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += blockSize;
		if (end >= size)
		{
			end = size;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	 start, start + blockSize);

	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
