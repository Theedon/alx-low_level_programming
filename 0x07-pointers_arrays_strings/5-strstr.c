#include "main.h"

/**
 *_strstr - function
 *@haystack: input
 *@needle: input
 *Return: return char
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;
	char *a;
	int count;
	char *r;

	for (p = haystack; *p != '\0'; p++)
	{
		for (a = needle; a != '\0'; a++)
		{
			if (*p == *a)
			{
				count++
			}
		}
	}
}
