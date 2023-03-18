#include <stdio.h>
#include <ctype.h>

/**
 *main - entry point
 *
 *Return: exit point
 */

int main(void)
{
	int i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(tolower(i));
	}
	putchar('\n');
	return (0);
}
