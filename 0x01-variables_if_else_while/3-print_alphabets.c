#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Return: 0 after function
 */
int main(void)
{
char ch = 'a';
for(ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar(toupper(ch));
printf("\n")
return (0);
}
