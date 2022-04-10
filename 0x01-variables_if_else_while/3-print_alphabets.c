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
char chA = 'A';
for(ch = 'a'; ch <= 'z'; ch++)
putchar(ch)
for(chA = 'A'; chA <= 'Z'; chA++)
putchar(chA);
printf("\n");
return (0);
}
