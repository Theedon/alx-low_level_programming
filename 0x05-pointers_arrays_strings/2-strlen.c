#include <stdio.h>

/**
 *_strlen - function
 *@s: parameter
 *Return: return length of string
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}
