#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * *_calloc - entry point;
 *   * @min: char params
 *    * @max: char params
 *     * Return: void or memory or 98
 */

int *array_range(int min, int max)
{  
int *s;
if (min > max)
{
return (NULL);
}

s = malloc(min + max);
if (s == NULL)
{
return (NULL);
}
return (s);
}
