#include <stdio.h>
/**
 * main - entry point
 *
 * Rteturn: 0 after running
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
if (ch == 'e')
ch = '';
if (ch == 'q')
ch = '';
putchar(ch);
return (0);
}
