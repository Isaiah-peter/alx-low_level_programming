#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - entry
 *
 * Return: 0 after function run
 */
int main(void)
{
char *ch;
for(ch = "A"; ch <= "Z"; ch++)
{
putchar(tolower(ch));
}
return (0);
}
