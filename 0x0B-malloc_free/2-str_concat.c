#include <string.h>
#include <stdlib.h>
/**
 *  * *str_concat - entry point
 *   * @s1: char parameter
 *    * @s2: char param
 *     * Return: char character
 */

char *str_concat(char *s1, char *s2)
{
int i;
int len;
char *s;
char *str;
if(s2 == NULL)
{
s2 = "";
}
if(s1 == NULL)
{
s1 = "";
}
strcpy(str, s1);
strcat(str, s2);
len = strlen(str);
s = malloc(len *sizeof(char));
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
