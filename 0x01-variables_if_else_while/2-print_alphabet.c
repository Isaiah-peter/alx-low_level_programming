#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 after function run
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= "z\n"; ch++)
putchar(ch);
return (0);
}
