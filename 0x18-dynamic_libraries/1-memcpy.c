#include <string.h>
/**
 * *_memcpy - copy more
 * @dest: char parameter
 * @src: char parameter
 * @n: unsigned int parameter
 * Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
