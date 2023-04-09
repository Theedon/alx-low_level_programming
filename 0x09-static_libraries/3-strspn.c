#include "main.h"

/**
 *_strspn - function
 *@s: input
 *@accept: input
 *Return: return int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p;
	char *a;
	int count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
		}

		if (*a == '\0')
			break;
	}

	return (count);
}
