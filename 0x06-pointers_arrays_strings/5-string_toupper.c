#include "main.h"

/**
 *string_toupper - function
 *@a: parameter
 *Return: string
 */

char *string_toupper(char *a)
{
	int i;
	int len = 0;

	while (a[len])
		len++;

	for (i = 0; i < len && a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
