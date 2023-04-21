#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (separator && i != (n - 1))
		{
			if (str)
			printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else if (!separator || i == (n - 1))
		{
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}

	va_end(ptr);

	printf("\n");

}
