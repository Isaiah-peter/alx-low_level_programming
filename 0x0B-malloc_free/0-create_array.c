#include <stdlib.h>
/**
 * *create_array - entry point
 * @size: unsigned int param
 * @c: char parameter
 * Return: char character
 */

char *create_array(unsigned int size, char c)
{
char *s;
if(size == 0)
{
return (NULL);
}
s = malloc(size * sizeof(char));
if(s == NULL)
{
return (NULL);
}

s[size] = c;

return (s);
}
