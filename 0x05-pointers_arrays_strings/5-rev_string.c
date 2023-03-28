#include "main.h"

/**
 *rev_string - function
 *@s: input
 *Return: returns void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	int j = 0;
	char k;

	while (s[len])
		len++;
	if (len % 2 == 0)

	for (i = len - 1; i > len / 2; i--)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		j++;


	}
}
