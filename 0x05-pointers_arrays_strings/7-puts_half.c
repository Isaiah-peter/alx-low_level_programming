#include <string.h>
#include "main.h"
/**
 * puts_half - print erv
 * @str: char parameter
 * Return: Nothing
 */

void puts_half(char *str)
{
int i;
int num;
num = strlen(str);
if (num % 2 == 0)
{
i = num / 2;
}
else
{
i = num - 1 / 2;
}
while (i <= num - 1)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
