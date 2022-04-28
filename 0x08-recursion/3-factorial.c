/**
 * factorial - get the factorial of an integer
 * @n: in parameter
 * Return: int
 */

int factorial(int n)
{
if (n < 1)
{
return (-1);
}
if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
