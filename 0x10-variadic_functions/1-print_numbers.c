#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int argument;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		argument = va_arg(ptr, int);
		if (separator == NULL || (i == n - 1))
			printf("%d", argument);
		else
			printf("%d%s", argument, separator);
	}

	va_end(ptr);
	printf("\n");

}
