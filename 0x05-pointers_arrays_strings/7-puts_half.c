#include "main.h"

/**
 *puts_half - function
 *@str: input
 *Return: return void
 */

void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
