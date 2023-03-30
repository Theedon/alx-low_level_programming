#include "main.h"

/**
 *cap_string - function
 *@a: parameter
 *Return: string
 */

char *cap_string(char *a)
{
	int len = 0;
	int i;
	int j;
	int len_chars = 0;
	char chars[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')',
			'{', '}'};
	int is_char = 0;

	while (*(a + len))
		len++;

	while (chars[len_chars])
		len_chars++;

	for (i = 0; i < len && a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
			continue;
		}

		for (j = 0; j < len_chars; j++)
		{
			if (a[i - 1] == chars[j])
				is_char = 1;
		}

		if (is_char == 1)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] -= 32;
			}
		}
		is_char = 0;
	}
	return (a);
}
