#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - entry point
 *@s1: char params
 *@s2: char params
 *@n: unsigned int
 *Return: void or memory or 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
s = malloc(n + sizeof(s1));
if (s == NULL)
{
return (NULL);
}
strcat(s, s1);
strncat(s, s2, n);
return (s);
}
