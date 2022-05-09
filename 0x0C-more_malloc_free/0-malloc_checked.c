#include <stdio.h>
#include <stdlib.h>

/**
 *  * *malloc_checked - entry point;
 *   * @b: unsigned int
 *    * Return: void or memory or 98
 */

void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(b);
if (s == NULL)
{
return (98);
}
return (s);
}
