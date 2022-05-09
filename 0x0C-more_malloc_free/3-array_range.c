#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -a function that creates an array of integers
 * @min: lower end of values
 * @max: upper end
 * Return: int *
 */
int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);

}
