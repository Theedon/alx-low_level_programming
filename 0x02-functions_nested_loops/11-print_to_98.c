#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - print number to 98
 *@n: integer input as parameter
 *
 *Return: returns void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

