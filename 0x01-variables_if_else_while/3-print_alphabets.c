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
char chA = '';
for(ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
chA += toupper(ch);
putchar(chA);
printf("\n");
return (0);
}
