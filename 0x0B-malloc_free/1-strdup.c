#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - entry point
 * @str: char parameter
 * Return: char character
 */

char *_strdup(char *str)
{
int i;
int len;
char *s;

len = strlen(str);
s = malloc(len * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
return (s);
}
