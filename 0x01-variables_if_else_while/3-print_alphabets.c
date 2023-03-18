#include <stdio.h>
#include <ctype.h>
/**
 *main- entry point
 *
 *Return: Exit point
 */

int main(void)
{
	int i;
	int j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	for (j = 'A'; j <= 'Z'; i++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
