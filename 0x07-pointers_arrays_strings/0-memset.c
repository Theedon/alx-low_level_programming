include "main.h"

/**
 *_memset - function
 *@s: input
 *@b: input
 *@n: input
 *Return: return character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
