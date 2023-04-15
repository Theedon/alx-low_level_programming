#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	if (n < len_s2)
		len_s2 = n;

	p = malloc(sizeof(*p) * ((len_s1 + len_s2) + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
