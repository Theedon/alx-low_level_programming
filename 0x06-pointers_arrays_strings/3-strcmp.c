#include "main.h"

/**
 *_strcmp - function
 *@s1: parameter
 *@s2: parameter
 *Return: return integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int value = 0;
	int len_s1 = 0;
	int len_s2 = 0;

	while (*(s1 + len_s1))
	{
		len_s1++;
	}
	while (*(s2 + len_s2))
	{
		len_s2++;
	}

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			value = s1[i] - s2[i];
			break;
		}

	}
	return (value);
}
