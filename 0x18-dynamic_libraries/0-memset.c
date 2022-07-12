#include <string.h>

/**
 * *_memset - change letter
 * @s: char parameter
 * @b: char parameter
 * @n: insigned int parameter
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
