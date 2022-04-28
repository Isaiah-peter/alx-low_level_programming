#include <math.h>
/**
 * _sqrt_recursion - get the square root of an integer
 * @n: int param
 * Return: int
 */

int _sqrt_recursion(int n)
{
int i;
i = sqrt(n);
if (i * i != n)
{
return (-1);
}

return (i);
}
