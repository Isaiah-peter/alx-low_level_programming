#include <string.h>
/**
 * *_strstr - find the first element
 * @haystack: char parameter
 * @needle: char parameter
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
char *n;
n = strstr(haystack, needle);
return (n);
}
