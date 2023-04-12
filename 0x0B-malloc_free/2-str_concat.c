#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new_str;
	int len_s1 = 0;
	int len_s2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (*(s1 + len_s1))
		len_s1++;
	while (*(s2 + len_s2))
		len_s2++;

	new_str = (char *) malloc(sizeof(char) * (len_s1 + len_s2));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		*(new_str + i) = *(s1 + i);
	}

	for (j = 0; j < len_s2; j++)
	{
		*(new_str + i) = *(s2 + j);
		i++;
	}

	return (new_str);
}
