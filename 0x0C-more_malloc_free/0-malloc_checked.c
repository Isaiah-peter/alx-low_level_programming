#include <stdlib.h>

/**
 * *malloc_checked - entry point
 * @b: unsigned int
 * Return: void or memory or 98
 */

void *malloc_checked(unsigned int b)
{
char *s;

s = malloc(b * sizeof(char));
if (s == NULL)
{
exit(98);
}
return (s);
}
