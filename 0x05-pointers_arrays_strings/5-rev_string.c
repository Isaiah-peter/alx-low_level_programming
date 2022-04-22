#include <string.h>
/**
 * rev_string - string
 * @s: char parameter
 * Return: Nothing
 */

void rev_string(char *s)
{
int n  = strlen(s);

int i;
for (i = 0; i < n / 2; i++)
{
char ch = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = ch;
}
}
