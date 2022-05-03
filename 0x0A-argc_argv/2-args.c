#include <stdio.h>
#include "main.h"
/**
 *main - entry point
 *@argc: int parameter
 *@argv: char parameter
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;
i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
