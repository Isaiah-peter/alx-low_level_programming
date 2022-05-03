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
int cent, coin_num = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cent = atoi(argv[1]);
while (cent > 0)
{
if (cent >= 25)
{
cent -= 25;
}
else if (cent >= 10)
{
cent -= 10;
}
else if (cent >= 5)
{
cent -= 5;
}
else if (cent >= 2)
{
cent -= 2;
}
else if (cent >= 1)
{
cent -= 1;
}

coin_num += 1;
}
}
printf("%d\n", coin_num);
return (0);
}
