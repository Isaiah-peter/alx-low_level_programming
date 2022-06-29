#include "holberton.h"
/**
  * print_square - prints a hashtag square
  * @size: how big the square is
  *
  *
  * Return: void
  */
void print_square(int size)
{
int x;
int y;

if (size > 0)
{
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
else
_putchar('\n');
}
