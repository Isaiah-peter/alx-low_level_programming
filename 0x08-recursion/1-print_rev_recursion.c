#include <stdio.h>
/**
 * _print_rev_recursion - print reverse
 * @s: char param
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
