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

	for (i = len - 1; i >= 0; i--)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		j++;
	}
}
