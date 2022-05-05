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
int i;
if (size == 0)
{
return (NULL);
}
s = malloc(size * sizeof(char));
if (s == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
s[i] = c;
}

return (s);
}
