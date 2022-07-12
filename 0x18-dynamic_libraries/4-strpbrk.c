#include <string.h>
/**
 * *_strpbrk - find first character
 * @s: char parameter
 * @accept: char parameter
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
char *n;
n = strpbrk(s, accept);
return (n);
}
