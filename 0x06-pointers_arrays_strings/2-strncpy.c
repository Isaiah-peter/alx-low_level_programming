#include <string.h>
/**
 * *_strncpy - copy
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
