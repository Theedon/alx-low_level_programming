#include "main.h"

/**
 *main - entry point
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
