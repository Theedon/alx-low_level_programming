#include <stdio.h>
#include <ctype.h>

/**
 *main- entry point.
 *
 *Return: exit point
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
