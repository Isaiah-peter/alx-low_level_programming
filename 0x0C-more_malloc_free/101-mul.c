#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply 2 numbers as arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 success
*/
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}

/**
  * mult - multiplication
  * @product: int * 4 answer
  * @n1: string num1
  * @n2: string num2
  * @len1: len num1
  * @len2: len num2
  * Return: void
  */
void mult(int *product, char *n1, char *n2, int len1, int len2)
{
/* declarations */
int i;
int j;
int f1, f2;
int sum;
/* the long math */
for (i = len1 - 1; i >= 0; i--)
{
sum = 0;
f1 = n1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
f2 = n2[j] - '0';
sum += product[i + j + 1] + (f1 * f2);
product[i + j + 1] = sum % 10;
sum /= 10;
}
if (sum > 0)
{
product[i + j + 1] += sum;
}
}
for (i = 0; product[i] == 0 && i < len1 + len2; i++)
{
if (i == len1 + len2)
_putchar('0');
}
for (; i < len1 + len2; i++)
{
_putchar(product[i] + '0');
}
_putchar('\n');
}

/**
  * is_valid - is the number a valid one
  * @num : char string num
  * Return: int, 1 if true 0 if false
  */
int is_valid(char *num)
{
/* declarations */
int i;
/* checking for ints */
for (i = 0; num[i]; i++)
{
if (num[i] < '0' || num[i] > '9')
{
return (0);
}
}
return (1);
}
/**
  * err - errors r us
  * @status: error code 4 exit
  * Return: void
  */
void err(int status)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(status);
}
/**
  * main - getting the args
  * @argc: args #
  * @argv: arg array
  * Return: 0
  */
int main(int argc, char **argv)
{
/* declarations */
int i, j, len1 = 0, len2 = 0;
int *res;
/* too many args? too few? */
if (argc != 3)
{
err(98);
}
/* using isvalid */
for (i = 1; i < argc; i++)
{
if (!(is_valid(argv[i])))
{
err(98);
}
if (i == 1)
{
for (j = 0; argv[i][j]; j++)
{
len1++;
}
}
if (i == 2)
{
for (j = 0; argv[i][j]; j++)
{
len2++;
}
}
}
res = int_calloc(len1 + len2, sizeof(int));
if (res == NULL)
{
err(98);
}
mult(res, argv[1], argv[2], len1, len2);
free(res);
return (0);
}
