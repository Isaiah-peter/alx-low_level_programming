#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 after running
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
continue;
putchar(ch);
}
printf("\n");
return (0);
}
