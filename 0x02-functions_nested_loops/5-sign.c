#include "main.h"

/**
 *print_sign - print sign of input
 *@n: integer input
 *
 *Return: returns 0 or 1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(n % 10 + '0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
