#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entry point
 *@argc: int parame
 *@argv: char param
 *Return: 1 of 0
 */

int main(int argc, char *argv[])
{
int i;
int sum;
i = 0;

for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) < 1)
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}

printf("%d\n", sum);
return (0);
}
