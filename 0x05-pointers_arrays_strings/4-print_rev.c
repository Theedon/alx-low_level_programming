#include "main.h"
/**
 *print_rev - function
 *@s: input
 *Return: void
 */

void print_rev(char *s)
{
	int len;
	int j;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
