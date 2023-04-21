#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	char *sep = "";
	char *string;

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ptr, double));
				break;
			case 's':
				string = va_arg(ptr, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", sep, string);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
