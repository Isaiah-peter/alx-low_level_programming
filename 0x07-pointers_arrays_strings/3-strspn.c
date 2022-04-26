#include <string.h>
/**
 * _strspn - count letter
 * @s: char parameter
 * @accept: char parameter
 * Result: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int result;
result = strspn(s, accept);
return (result);
}
