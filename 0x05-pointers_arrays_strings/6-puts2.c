#include <string.h>
#include "main.h"
/**
 * puts2 - print
 * @s: char parameter
 * Return: Nothing
 */

void puts2(char *str)
{
int i;
int num;
num = strlen(str);
i = 0;
while (i <= num - 1)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
