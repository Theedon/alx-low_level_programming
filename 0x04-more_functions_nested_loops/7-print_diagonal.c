#include "main.h"

/**
 *print_diagonal - print diagonal lines
 *@n: input parameter
 *
 *Return : return void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
			if (i == 0)
			{
			_putchar('\\');
			_putchar('\n');
			}
				}
	}
	else
	{
	_putchar('\n');
	}

}
