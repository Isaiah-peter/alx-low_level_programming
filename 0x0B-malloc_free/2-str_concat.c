#include <string.h>
#include <stdlib.h>
/**
 *  * *str_concat - entry point
 *   * @s1: char parameter
 *    * @s2: char param
 *     * Return: char character
 *      */

char *str_concat(char *s1, char *s2)
{
int i;
int len;
char *s;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
strcat(s1, s2);
len = strlen(s1);
s = malloc(len *sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
s[i] = s1[i];
}
return (s);
}
