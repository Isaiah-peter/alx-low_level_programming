#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concats 2 strings
 * @s1: the first str
 * @s2: the second str
 * @n: how much of s2 to add
 * Return: ptr to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int total = 0;
	int i;
	int j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += strlen(s1) + n;
	new = malloc((total * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (; n || !s2; n--, i++, j++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}
