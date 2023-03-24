#include "main.h"

/**
 *print_triangle - print a triangle of n size
 *@size: parameter
 *
 *Return: return void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int x;

	if (size >= 1)
	{
		for (i = 1; i <= size; i++)
		{
			x = size - i;
			for (j = 0; j < x; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
