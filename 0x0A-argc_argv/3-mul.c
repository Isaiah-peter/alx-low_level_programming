#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int parame
 * @argv: char param
 * Return: 1 of 0
 */

int main(int argc, char *argv[])
{
int i;
int j;
int m;
if (argc < 2)
{
printf("Error\n");
return (1);
}

if (argc == 2)
{
printf("%d\n", argv[1]);
return (0);
}

j = atoi(argv[1]);
m = atoi(argv[2]);
i = j * m;
printf("%d\n", i);
return (0);
}
