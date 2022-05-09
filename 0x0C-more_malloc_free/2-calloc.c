#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - entry point;
 * @nmemb: char params
 * @size: char params
 * Return: void or memory or 98
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if (size == 0)
{
return (NULL);
}
if (nmemb == 0)
{
return (NULL);
}
s = calloc(nmemb, size);
if (s == NULL)
{
return (NULL);
}
return (s);
}
