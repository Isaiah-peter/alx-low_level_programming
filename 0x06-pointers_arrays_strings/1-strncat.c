#include <string.h>
/**
 * *_strncat - more on it
 * @dest: char parameter
 * @src: char
 * @n: int char
 * * Return: char string
 */

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
