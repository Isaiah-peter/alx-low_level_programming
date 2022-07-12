#include <string.h>
/**
 * *_strchr - string
 * @s: char parameter
 * @c: char parameter
 * Return: char
 */

char *_strchr(char *s, char c)
{
char *result;
result = strchr(s, c);
return (result);
}
