#include <stdio.h>

/**
 *main- entry point.
 *
 *Return: exit point
 */

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
