#include "main.h"

/**
 *print_square - print a square
 *@size: input
 *
 *Return: return void
 */

void print_square(int size)
{
	int l;
	int b;

	if (size >= 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
