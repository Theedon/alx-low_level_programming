#include <stdio.h>

/**
 *main- entry point
 *
 *Return: Exit point
 */

int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
