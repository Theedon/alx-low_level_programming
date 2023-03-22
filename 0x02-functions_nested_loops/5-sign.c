#include "main.h"

/**
 *main - entry point
 *
 *Return: returns void
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
